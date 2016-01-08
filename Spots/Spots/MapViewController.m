//
//  MapViewController.m
//  Spots
//
//  Created by Kerolos Nakhla on 1/7/16.
//  Copyright © 2016 Kerolos Nakhla. All rights reserved.
//

#import "MapViewController.h"

@interface MapViewController () <MKMapViewDelegate, UISearchBarDelegate>

@end

@implementation MapViewController

- (void)searchBarSearchButtonClicked:(UISearchBar *)searchBar {
    
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.mapView.showsUserLocation = YES;
    self.mapView.showsBuildings = YES;
    
    self.locationManager = [CLLocationManager new];
    if ([self.locationManager respondsToSelector:@selector(requestWhenInUseAuthorization)]) {
        [self.locationManager requestWhenInUseAuthorization];
    }
    
    
    
    MKLocalSearchRequest *request = [[MKLocalSearchRequest alloc] init];
    // I want to take the user input from the search bar
    //request.naturalLanguageQuery = self.searchPOI.text;
    request.naturalLanguageQuery = @"Resturants";
    request.region = self.mapView.region;
    MKLocalSearch *search = [[MKLocalSearch alloc] initWithRequest:request];
    [search startWithCompletionHandler:^(MKLocalSearchResponse *response, NSError *error) {
        NSLog(@"Map Items: %@", response.mapItems);
    }];
    
    [self.locationManager startUpdatingLocation];
}


// To zoom into location doesn't work yet
-(void)mapView:(MKMapView *)mapView didUpdateUserLocation:(MKUserLocation *)userLocation {
    MKMapCamera *camera = [MKMapCamera cameraLookingAtCenterCoordinate:userLocation.coordinate fromEyeCoordinate:CLLocationCoordinate2DMake(userLocation.coordinate.latitude, userLocation.coordinate.longitude) eyeAltitude:100000];
    [mapView setCamera:camera animated:YES];
}



@end

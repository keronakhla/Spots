//
//  MapViewController.h
//  Spots
//
//  Created by Kerolos Nakhla on 1/7/16.
//  Copyright © 2016 Kerolos Nakhla. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface MapViewController : UIViewController


@property (weak, nonatomic) IBOutlet UISearchBar *searchMap;
@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@property (strong, nonatomic) MKLocalSearchRequest *request;
@property (strong, nonatomic) CLLocationManager *locationManager;






@end

//
//  CSRoutePolyLineOverlay.h
//  CycleStreets
//
//  Created by Neil Edwards on 25/02/2014.
//  Copyright (c) 2014 CycleStreets Ltd. All rights reserved.
//


#import <MapKit/MapKit.h>

@class RouteVO,SegmentVO;

@interface CSRoutePolyLineOverlay : NSObject <MKOverlay>

@property (nonatomic,readonly)  NSMutableArray				*routePoints;


-(id) initWithRoute:(RouteVO*)route;
-(void)updateForDataProvider:(RouteVO*)route;

-(id) initWithSegment:(SegmentVO*)segment;
-(void)updateForSegment:(SegmentVO*)segment;

- (void)lockForReading;
- (void)unlockForReading;

-(void)resetOverlay;

@end

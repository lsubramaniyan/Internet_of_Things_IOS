//
//  SFParkingMeter.h
//  Smart Parking
//
//  Created by Ramesh on 29/03/17.
//  Copyright © 2017 Aspire Syatems. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFParkingMeter : NSObject

@property ( nonatomic, strong ) NSNumber *time;
@property ( nonatomic, strong ) NSString *status;
@property ( nonatomic, strong ) NSNumber *amount;

@property (nonatomic, assign) BOOL success;
@property (nonatomic, assign) NSInteger code;
@property (nonatomic, strong) NSString * message;

@end

//
//  SFHistory.h
//  Smart Parking
//
//  Created by Ramesh on 29/03/17.
//  Copyright © 2017 Aspire Syatems. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFHistory : NSObject

@property ( nonatomic, strong ) NSString *facilityName;
@property ( nonatomic, strong ) NSString *slotNo;
@property ( nonatomic, strong ) NSDate *time;
@property ( nonatomic, strong ) NSString *amount;
@property ( nonatomic, strong ) NSString *slotId;
@property ( nonatomic, strong ) NSString *mobileNo;
@property ( nonatomic, strong ) NSString *vehicleNo;
@property ( nonatomic, strong ) NSString *outTime;

@end

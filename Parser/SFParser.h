//
//  SFParser.h
//  Smart Parking
//
//  Created by Ramesh on 31/03/17.
//  Copyright © 2017 Aspire Syatems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFResponse.h"
#import "SFParkingMeter.h"
#import "SFAvaliableSlot.h"

@interface SFParser : NSObject

+ (SFResponse *)parseResponse :(NSDictionary *)response;

+ (SFParkingMeter *)parseParkingMeterResponse :(NSDictionary *)response;

+ (NSMutableArray *)parseParkingHistoryResponse :(NSDictionary *)response;

+ (SFAvaliableSlot *)AvailableSlots :(NSDictionary *)response;

@end

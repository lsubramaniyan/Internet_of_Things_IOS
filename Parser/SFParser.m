

//
//  SFParser.m
//  Smart Parking
//
//  Created by Ramesh on 31/03/17.
//  Copyright © 2017 Aspire Syatems. All rights reserved.
//

#import "SFParser.h"
#import "SFHistory.h"

@implementation SFParser

+ (SFResponse *)parseResponse :(NSDictionary *)response
{
    if (response) {
        SFResponse *data = [[SFResponse alloc]init];
        
        NSNumber *number = response[@"success"];
        data.success = [number boolValue];
        data.message = response[@"message"];
        data.token = response[@"token"];
        return data;
    }
    return nil;
}

+ (SFParkingMeter *)parseParkingMeterResponse :(NSDictionary *)response
{
    if (response) {
        SFParkingMeter *data = [[SFParkingMeter alloc]init];
        
        NSNumber *number = response[@"success"];
        data.success = [number boolValue];
        data.message = response[@"message"];
        data.status = response[@"order"];
        data.time = response[@"totalTime"];

        return data;
    }
    return nil;
}

+ (NSMutableArray *)parseParkingHistoryResponse :(NSDictionary *)response
{
    NSMutableArray *array = [[NSMutableArray alloc]init];

    if (response)
    {
        for (NSDictionary *dict in response[@"orders"])
        {
            SFHistory *history = [[SFHistory alloc]init];
            history.time = dict[@"inTime"];
            history.mobileNo = dict[@"mobileNo"];
            history.slotId = dict[@"vehicleNo"];
            history.vehicleNo = dict[@"mobileNo"];
            [array addObject:history];
        }
    }
    return array;
}

+ (SFAvaliableSlot *)AvailableSlots :(NSDictionary *)response
{
    
    SFAvaliableSlot *slot = [[ SFAvaliableSlot alloc]init];
    
    
    if (response)
        {
        for (NSDictionary *dict in response[@"slots"])
            {
            
            if ([dict[@"status"] isEqualToString:@"available"] && [dict[@"facilityId"] isEqualToString:@"A"]) {
                slot.falityACount ++;
            }
            else
                {
                slot.falityBCount ++;
                }
        }
    }
    return slot;
}

@end

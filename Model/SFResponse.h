//
//  SFResponse.h
//  Smart Parking
//
//  Created by Ramesh on 31/03/17.
//  Copyright © 2017 Aspire Syatems. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFResponse : NSObject

@property (nonatomic, assign) BOOL success;
@property (nonatomic, assign) NSInteger code;
@property (nonatomic, strong) NSString * message;
@property (nonatomic, strong )NSString *token;
@property (nonatomic, strong )NSNumber *totalTime;



@end

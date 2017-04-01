//
//  SFSuccessResponse.h
//  Smart Parking
//
//  Created by Ramesh on 29/03/17.
//  Copyright © 2017 Aspire Syatems. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFSuccessResponse : NSObject

@property (nonatomic, strong) NSURLResponse *response;
@property (nonatomic, strong) id responseObject;
@property (nonatomic, assign) NSInteger statusCode;
@property (nonatomic, strong ) NSString *token;

@end

//
//  VIMUserBadge.h
//  Vimeo
//
//  Created by Jake Oliver on 8/8/16.
//  Copyright © 2016 Vimeo. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import "VIMModelObject.h"

typedef NS_ENUM(NSInteger, VIMUserBadgeType)
{
    VIMUserBadgeTypeDefault = 0,
    VIMUserBadgeTypePlus,
    VIMUserBadgeTypePro,
    VIMUserBadgeTypeBusiness,
    VIMUserBadgeTypeAlum,
    VIMUserBadgeTypeStaff,
    VIMUserBadgeTypeSupport,
    VIMUserBadgeTypeCuration
};

@interface VIMUserBadge : VIMModelObject

@property (nonatomic, copy, nullable) NSString *alt_text;
@property (nonatomic, copy, nullable) NSString *type;
@property (nonatomic, assign) VIMUserBadgeType badgeType;
@property (nonatomic, copy, nullable) NSString *text;
@property (nonatomic, copy, nullable) NSString *url;

@end

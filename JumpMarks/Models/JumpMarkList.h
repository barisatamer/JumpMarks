//
//  JumpMarkList.h
//  JumpMarks
//
//  Created by Merrick Poon on 3/22/15.
//  Copyright (c) 2015 Merrick Poon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JumpMark.h"

NS_ASSUME_NONNULL_BEGIN

@interface JumpMarkList : NSObject

// The marks should be stored with the associated Xcode project's custom data path.
@property (nonatomic, strong) NSString *customDataPath;
@property (nonatomic, strong) NSString *filePath;

- (instancetype)initWithCustomDataPath:(NSString *)customDataPath;

// Persistence
- (void)load;
- (void)flush;

// Manipulation
- (NSArray<__kindof JumpMark *> *)marksForFilePath:(NSString *)filePath;
- (JumpMark *)getMarkNumber:(NSInteger)markNumber;
- (NSNumber *)getPrevMarkNumber:(NSInteger)lastMarkNumber;
- (NSNumber *)getNextMarkNumber:(NSInteger)lastMarkNumber;

// Retrieval
- (void)toggleMarkNumber:(NSInteger)markNumber filePath:(NSString *)filePath lineNumber:(NSInteger)lineNumber;
- (void)removeMarkNumber:(NSInteger)markNumber;
- (void)removeAllMarks;

@end

NS_ASSUME_NONNULL_END

//
//  TKMethod.h
//  TKRuntime
//
//  Created by zhengxianda on 2018/7/17.
//

#import <Foundation/Foundation.h>

#import "TKEncoding.h"

#import <objc/runtime.h>

@interface TKMethod : NSObject

@property(nonatomic, assign, readonly, nullable) Method method;

@property(nonatomic, strong, readonly) NSString * name;
@property(nonatomic, assign, readonly) IMP imp;
@property(nonatomic, strong, readonly) TKEncoding * returnType;
@property(nonatomic, strong, readonly) NSArray<TKEncoding *> * argumentTypes;

- (instancetype)initWithMethod:(Method)method;

- (instancetype)initWithName:(NSString *)name
                         imp:(IMP)imp
                  returnType:(TKEncoding *)returnType
                  argumentTypes:(NSArray<TKEncoding *> *)argumentTypes;

- (instancetype)initWithName:(NSString *)name
                   baseClass:(Class)baseClass
                    baseName:(NSString * _Nullable)baseName
                  returnType:(TKEncoding *)returnType
                  argumentTypes:(NSArray<TKEncoding *> *)argumentTypes;

@end

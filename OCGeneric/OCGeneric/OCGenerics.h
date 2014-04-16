#define NSMutableArray(__className) __className##NSMutableArray

#define GENERIC(__className)\
@interface __className##NSMutableArray : NSObject\
{\
    NSMutableArray *_ary;\
}\
\
- (void)addObject:(__className *)anObject;\
- (void)removeObject:(__className *)anObject; \
- (__className *)objectAtIndex:(NSUInteger)index;\
@end\
\
@implementation __className##NSMutableArray\
- (id)init\
{\
    self = [super init];\
    if (self)\
    {\
        _ary = [[NSMutableArray alloc] init];\
    }\
    return self;\
}\
\
- (void)dealloc\
{\
    /*[super dealloc]*/;\
}\
- (void)addObject:(__className *)anObject\
{\
    [_ary addObject:anObject];\
}\
- (void)removeObject:(__className *)anObject\
{\
    [_ary removeObject:anObject];\
}\
- (__className *)objectAtIndex:(NSUInteger)index\
{\
    return [_ary objectAtIndex:index];\
}\
- (NSString *)description\
{\
    return [_ary description];\
}\
- (void)addObjectsFromArray:(NSMutableArray(__className) *)array\
{\
    [_ary addObjectsFromArray:[array valueForKey:@"_ary"]];\
}\
@end






OCGeneric
=========

Basis Generic Support in Objective-C.

Declaring an faked NSMuatbleArray like this
``` Objective-C
NSMutableArray(NSString) *strAry = [[NSMutableArray(NSString) alloc] init];
NSMutableArray(NSNumber) *numberAry = [[NSMutableArray(NSNumber) alloc] init];
```

The Xcode will figure out the wrong type when you want to add a NSnumber object into an NSStirng Array


You can make some extentions based on this if you want to do more

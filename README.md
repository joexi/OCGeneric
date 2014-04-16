OCGeneric
=========

Basis Generic Support in Objective-C.
* Including OCGenerics.h

* Register the class you want to use in NSArray

``` Objective-C
    GENERIC(NSString)
    GENERIC(NSNumber)
```

* Declaring a faked NSMuatbleArray like this

``` Objective-C
    NSMutableArray(NSString) *strAry = [[NSMutableArray(NSString) alloc] init];
    NSMutableArray(NSNumber) *numberAry = [[NSMutableArray(NSNumber) alloc] init];
```

* Type Recognize

    The Xcode will figure out the wrong type when you want to add a NSnumber object into an NSStirng Array

* Extensions

    You can make some extentions based on this by adding more functions into OCGenerics.h

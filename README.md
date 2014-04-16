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

![2014-04-16 4 52 40](https://cloud.githubusercontent.com/assets/3711488/2717694/83a20fea-c544-11e3-9345-5d88f8417185.png)


* Extensions

    You can make some extentions based on this by adding more functions into OCGenerics.h


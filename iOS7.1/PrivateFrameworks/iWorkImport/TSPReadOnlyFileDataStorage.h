//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPFileDataStorage.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
}

- (void).cxx_destruct;
- (BOOL)writeToBundleWriter:(id)arg1 preferredFilename:(id)arg2 filename:(id *)arg3 didCopyDataToBundle:(char *)arg4;
- (BOOL)readOnly;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end

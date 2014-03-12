/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSOperationQueue, SKUIClientContext, UIImage;

@interface SKUIRedeemConfiguration : NSObject
{
    long long _category;
    SKUIClientContext *_clientContext;
    UIImage *_inputImage;
    UIImage *_landingImage;
    NSOperationQueue *_operationQueue;
    UIImage *_successImage;
}

@property(retain, nonatomic) UIImage *successImage; // @synthesize successImage=_successImage;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) UIImage *landingImage; // @synthesize landingImage=_landingImage;
@property(retain, nonatomic) UIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (void)_loadURLsWithDictionary:(id)arg1;
- (void)loadImages;
- (id)initWithOperationQueue:(id)arg1 category:(long long)arg2 clientContext:(id)arg3;

@end

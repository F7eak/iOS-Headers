/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, SKUIColorScheme, SKUIIconDataConsumer, SKUINewsstandImageDataConsumer, SKUIProductImageDataConsumer, UIColor;

@interface SKUIItemArtworkContext : NSObject
{
    UIColor *_backgroundColor;
    SKUIColorScheme *_colorScheme;
    SKUIProductImageDataConsumer *_generalImageConsumer;
    SKUIIconDataConsumer *_iconConsumer;
    SKUIProductImageDataConsumer *_letterboxConsumer;
    SKUINewsstandImageDataConsumer *_newsstandConsumer;
    NSMutableDictionary *_placeholders;
    SKUIProductImageDataConsumer *_posterConsumer;
}

+ (id)wishlistContext;
+ (id)roomContext;
+ (id)lockupContextWithSize:(long long)arg1;
@property(retain, nonatomic) SKUIProductImageDataConsumer *posterConsumer; // @synthesize posterConsumer=_posterConsumer;
@property(retain, nonatomic) SKUINewsstandImageDataConsumer *newsstandConsumer; // @synthesize newsstandConsumer=_newsstandConsumer;
@property(retain, nonatomic) SKUIProductImageDataConsumer *letterboxConsumer; // @synthesize letterboxConsumer=_letterboxConsumer;
@property(retain, nonatomic) SKUIIconDataConsumer *iconConsumer; // @synthesize iconConsumer=_iconConsumer;
@property(retain, nonatomic) SKUIProductImageDataConsumer *generalConsumer; // @synthesize generalConsumer=_generalImageConsumer;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)artworkForItem:(id)arg1;
- (id)URLForItem:(id)arg1;
- (id)placeholderImageForItem:(id)arg1;
- (struct CGSize)largestImageSizeForItems:(id)arg1;
- (struct CGSize)imageSizeForItem:(id)arg1;
- (id)dataConsumerForItem:(id)arg1;

@end

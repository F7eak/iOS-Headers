/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIImage;

@interface UIAutocorrectImageView : UIView
{
    UIImage *m_image;
}

+ (id)imageWithMaskingView:(id)arg1 maskingRect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 string:(id)arg2 font:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;

@end

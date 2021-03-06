/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding> {
    MIPMultiverseIdentifier *_multiverseIdentifier;
}

@property (nonatomic, readonly) BOOL hasDeletableContent;
@property (nonatomic, readonly) BOOL isDownloadable;
@property (nonatomic, readonly) BOOL isDownloadableStoreOffer;
@property (nonatomic, readonly) BOOL isPurchasableStoreOffer;
@property (nonatomic, readonly) MPMediaLibrary *mediaLibrary;
@property (nonatomic, readonly) MIPMultiverseIdentifier *multiverseIdentifier;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) int preferredStoreOfferVariant;
@property (nonatomic, readonly) MPMediaItem *representativeItem;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (BOOL)canFilterByProperty:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buyOffer;
- (id)buyOfferForVariant:(int)arg1;
- (id)cachedValueForProperty:(id)arg1;
- (id)completionOfferForVariant:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (void)invalidateCachedProperties;
- (BOOL)isDownloadable;
- (BOOL)isDownloadableStoreOffer;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPurchasableStoreOffer;
- (id)mediaLibrary;
- (id)multiverseIdentifier;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)persistentID;
- (int)preferredStoreOfferVariant;
- (id)representativeItem;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI

- (BOOL)hasDeletableContent;

@end

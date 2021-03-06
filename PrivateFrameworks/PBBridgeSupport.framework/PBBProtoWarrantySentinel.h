/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoWarrantySentinel : PBCodable <NSCopying> {
    NSMutableArray *_appleLanguages;
    NSString *_appleLocale;
    NSString *_deviceName;
    struct { 
        unsigned int removeSentinel : 1; 
        unsigned int sentinelExists : 1; 
    } _has;
    BOOL _removeSentinel;
    BOOL _sentinelExists;
}

@property (nonatomic, retain) NSMutableArray *appleLanguages;
@property (nonatomic, retain) NSString *appleLocale;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, readonly) BOOL hasAppleLocale;
@property (nonatomic, readonly) BOOL hasDeviceName;
@property (nonatomic) BOOL hasRemoveSentinel;
@property (nonatomic) BOOL hasSentinelExists;
@property (nonatomic) BOOL removeSentinel;
@property (nonatomic) BOOL sentinelExists;

- (void).cxx_destruct;
- (void)addAppleLanguages:(id)arg1;
- (id)appleLanguages;
- (id)appleLanguagesAtIndex:(unsigned int)arg1;
- (unsigned int)appleLanguagesCount;
- (id)appleLocale;
- (void)clearAppleLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (BOOL)hasAppleLocale;
- (BOOL)hasDeviceName;
- (BOOL)hasRemoveSentinel;
- (BOOL)hasSentinelExists;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)removeSentinel;
- (BOOL)sentinelExists;
- (void)setAppleLanguages:(id)arg1;
- (void)setAppleLocale:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setHasRemoveSentinel:(BOOL)arg1;
- (void)setHasSentinelExists:(BOOL)arg1;
- (void)setRemoveSentinel:(BOOL)arg1;
- (void)setSentinelExists:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end

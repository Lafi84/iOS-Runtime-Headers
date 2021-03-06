/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSCloudLibrary : NSObject {
    SSAccount *_account;
    HSConnection *_connection;
    NSString *_name;
    NSString *_uniqueIdentifier;
}

@property (nonatomic, readonly) SSAccount *account;
@property (nonatomic, readonly) HSConnection *connection;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)account;
- (id)connection;
- (id)initWithConnectionConfiguration:(id)arg1;
- (id)name;
- (id)uniqueIdentifier;

@end

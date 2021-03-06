/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationControllerSlideContext : NSObject {
    UIInputViewSetPlacement *_endPlacement;
    UIView *_snapshot;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _snapshotEndFrame;
}

@property (nonatomic, retain) UIInputViewSetPlacement *endPlacement;
@property (nonatomic, retain) UIView *snapshot;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } snapshotEndFrame;

- (void)dealloc;
- (id)endPlacement;
- (void)setEndPlacement:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setSnapshotEndFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)snapshot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })snapshotEndFrame;

@end

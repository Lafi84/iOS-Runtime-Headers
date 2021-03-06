/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScalingFlipView : UIView {
    UIView *_backView;
    id /* block */ _completionBlock;
    int _direction;
    double _duration;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _fromFrame;
    UIView *_frontView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _toFrame;
}

@property (nonatomic) int direction;
@property (nonatomic) double duration;

- (void).cxx_destruct;
- (id)_backLayerAnimation;
- (id)_frontLayerAnimation;
- (id)_inputColorAnimation;
- (id)_positionAnimation;
- (id)_timingFunction;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (int)direction;
- (double)duration;
- (id)initWithFrontView:(id)arg1 backView:(id)arg2;
- (void)performFlipWithCompletionBlock:(id /* block */)arg1;
- (void)setDirection:(int)arg1;
- (void)setDuration:(double)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
 */

@interface WebAppViewController : UIViewController {
    BOOL _setupRootViewColor;
    int _statusBarStyle;
    WebAppController *_webAppController;
}

@property (nonatomic) int statusBarStyle;
@property (nonatomic) WebAppController *webAppController;

- (int)preferredStatusBarStyle;
- (void)setStatusBarStyle:(int)arg1;
- (void)setWebAppController:(id)arg1;
- (int)statusBarStyle;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)webAppController;

@end

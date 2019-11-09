//
//  PresentationStrings.h
//  TOPasscodeViewControllerExample
//
//  Created by Majid Hatami Aghdam on 11/8/19.
//  Copyright © 2019 Timothy Oliver. All rights reserved.
//

#ifndef PresentationStrings_h
#define PresentationStrings_h

typedef struct _PresentationStrings {
    NSString * _Nonnull passCodeEnterViewTitle;// = NSLocalizedString(@"Enter Passcode", @"");
    NSString * _Nonnull deleteButtonTitle;
    NSString * _Nonnull cancelButtonTitle;
    NSString * _Nonnull faceIdButtonTitle;
    NSArray  * _Nonnull letteredTitles; //@[@"ABC", @"DEF", @"GHI", @"JKL", @"MNO", @"PQRS", @"TUV", @"WXYZ"];
    
    NSString * _Nonnull setPassCodePage_Title;
    NSString * _Nonnull setPassCodePage_EnterCurrentPasscode;
    NSString * _Nonnull setPassCodePage_EnterNewPasscode;
    NSString * _Nonnull setPassCodePage_ConfirmNewPasscode;
    NSString * _Nonnull currentPassCodeEnterViewTitle;
    NSString * _Nonnull setPassCodePage_DidnotMatch;
} PresentationStrings;


#endif /* PresentationStrings_h */

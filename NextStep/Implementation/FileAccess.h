
/* Generated by Interface Builder */

#import "HyperAccess.h"

@interface FileAccess:HyperAccess
{
}
+ initialize;

- (IBAction)saveAs: sender;
- (IBAction)saveAsRichText: sender;
- (IBAction)saveAsPlainText: sender;
- (IBAction)makeNew:sender;
- (IBAction)linkToNew:sender;
- (IBAction)linkToFile:sender;
- openMy:(const char *)filename diagnostic:(int)diagnostic;
- (IBAction)goHome:sender;
@end

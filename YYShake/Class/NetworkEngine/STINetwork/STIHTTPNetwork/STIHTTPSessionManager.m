////
////     ____    _                        __     _      _____
////    / ___\  /_\     /\/\    /\ /\    /__\   /_\     \_   \
////    \ \    //_\\   /    \  / / \ \  / \//  //_\\     / /\/
////  /\_\ \  /  _  \ / /\/\ \ \ \_/ / / _  \ /  _  \ /\/ /_
////  \____/  \_/ \_/ \/    \/  \___/  \/ \_/ \_/ \_/ \____/
////
////	Copyright Samurai development team and other contributors
////
////	http://www.samurai-framework.com
////
////	Permission is hereby granted, free of charge, to any person obtaining a copy
////	of this software and associated documentation files (the "Software"), to deal
////	in the Software without restriction, including without limitation the rights
////	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
////	copies of the Software, and to permit persons to whom the Software is
////	furnished to do so, subject to the following conditions:
////
////	The above copyright notice and this permission notice shall be included in
////	all copies or substantial portions of the Software.
////
////	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
////	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
////	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
////	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
////	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
////	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
////	THE SOFTWARE.
////
//
//#import "STIHTTPSessionManager.h"
//#import "STIHTTPNetwork.h"
//
//NSString * STIHTTPRequestMethodString(STIHTTPRequestMethod method)
//{
//    NSString * methodString = nil;
//    switch ( method ) {
//        case STIHTTPRequestMethodGet:
//            methodString = @"GET";
//            break;
//        case STIHTTPRequestMethodHead:
//            methodString = @"HEAD";
//            break;
//        case STIHTTPRequestMethodPost:
//            methodString = @"POST";
//            break;
//        case STIHTTPRequestMethodPut:
//            methodString = @"PUT";
//            break;
//        case STIHTTPRequestMethodPatch:
//            methodString = @"PATCH";
//            break;
//        case STIHTTPRequestMethodDelete:
//            methodString = @"DELETE";
//            break;
//    }
//    return methodString;
//}
//
//@implementation STIHTTPSessionManager
//
//- (id)processedDataWithResponseObject:(id)responseObject task:(NSURLSessionDataTask *)task
//{
//    return responseObject;
//}
//
//- (void)handleError:(NSError *)error responseObject:(id)responseObject task:(NSURLSessionDataTask *)task failureBlock:(STIHTTPApiBlock)failureBlock
//{
//    if ( failureBlock ) {
//        failureBlock(nil, error);
//    }
//}
//
//- (NSURLSessionDataTask *)method:(STIHTTPRequestMethod)method
//                        endpoint:(NSString *)endpoint
//                      parameters:(id)parameters
//                      completion:(void (^)(NSURLSessionDataTask *, id, NSError *))completion
//{
//    NSURLSessionDataTask *dataTask = [self dataTaskWithHTTPMethod:STIHTTPRequestMethodString(method)
//                                                        URLString:endpoint
//                                                       parameters:parameters
//                                                       completion:completion];
//    
//    [dataTask resume];
//    
//    return dataTask;
//}
//
//- (NSURLSessionDataTask *)dataTaskWithHTTPMethod:(NSString *)method
//                                       URLString:(NSString *)URLString
//                                      parameters:(id)parameters
//                                      completion:(void (^)(NSURLSessionDataTask *, id, NSError *))completion
//{
//    NSError *serializationError = nil;
//    NSMutableURLRequest *request = [self.requestSerializer requestWithMethod:method URLString:[[NSURL URLWithString:URLString relativeToURL:self.baseURL] absoluteString] parameters:parameters error:&serializationError];
//    if (serializationError) {
//        if (completion) {
//#pragma clang diagnostic push
//#pragma clang diagnostic ignored "-Wgnu"
//            dispatch_async(self.completionQueue ?: dispatch_get_main_queue(), ^{
//                completion(nil, nil, serializationError);
//            });
//#pragma clang diagnostic pop
//        }
//        
//        return nil;
//    }
//    
//    __block NSURLSessionDataTask *dataTask = nil;
//    
//    dataTask = [self dataTaskWithRequest:request completionHandler:^(NSURLResponse * __unused response, id responseObject, NSError *error) {
//        completion(dataTask, responseObject, error);
//    }];
//    
//    return dataTask;
//}
//
//@end

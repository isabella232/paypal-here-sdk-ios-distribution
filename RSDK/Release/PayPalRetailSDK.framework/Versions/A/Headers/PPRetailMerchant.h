/**
 * PPRetailMerchant.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: js/common/Merchant.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"


@class PPRetailSDK;
@class PPRetailError;
@class PPRetailPayPalErrorInfo;
@class PPRetailAccountSummary;
@class PPRetailAccountSummarySection;
@class PPRetailInvoiceAddress;
@class PPRetailInvoiceAttachment;
@class PPRetailInvoiceBillingInfo;
@class PPRetailInvoiceCCInfo;
@class PPRetailCountries;
@class PPRetailCountry;
@class PPRetailInvoiceCustomAmount;
@class PPRetailInvoice;
@class PPRetailInvoiceActions;
@class PPRetailInvoiceConstants;
@class PPRetailInvoiceListRequest;
@class PPRetailInvoiceListResponse;
@class PPRetailInvoiceMetaData;
@class PPRetailInvoiceTemplatesResponse;
@class PPRetailInvoicingService;
@class PPRetailInvoiceItem;
@class PPRetailInvoiceMerchantInfo;
@class PPRetailInvoiceNotification;
@class PPRetailInvoicePayment;
@class PPRetailInvoicePaymentTerm;
@class PPRetailInvoiceRefund;
@class PPRetailInvoiceSearchRequest;
@class PPRetailInvoiceShippingInfo;
@class PPRetailInvoiceTemplate;
@class PPRetailInvoiceTemplateSettings;
@class PPRetailMerchant;
@class PPRetailNetworkRequest;
@class PPRetailNetworkResponse;
@class PPRetailSdkEnvironmentInfo;
@class PPRetailRetailInvoice;
@class PPRetailRetailInvoicePayment;
@class PPRetailTokenExpirationHandler;
@class PPRetailTransactionContext;
@class PPRetailTransactionManager;
@class PPRetailTransactionBeginOptions;
@class PPRetailReceiptDestination;
@class PPRetailDeviceManager;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailCard;
@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailPaymentDevice;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailCardInsertedHandler;
@class PPRetailDeviceStatus;
@class PPRetailPayer;
@class PPRetailTransactionRecord;
@class PPRetailAuthorizedTransaction;
@class PPRetailPage;
@class PPRetailDiscoveredCardReader;
@class PPRetailCardReaderScanAndDiscoverOptions;
@class PPRetailDeviceConnectorOptions;


/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * The merchant represents the account that all calls to the PayPal services will affect. Essentially this is
 * where all collected money will go, which account locations and checkin operations will occur under, etc.
 */
@interface PPRetailMerchant : PPRetailObject

    /**
    * The email address of the merchant. @readonly
    */
    @property (nonatomic,strong,nullable,readonly) NSString* emailAddress;
    /**
    * The name of the business operated by the merchant. @readonly
    */
    @property (nonatomic,strong,nullable,readonly) NSString* businessName;
    /**
    * The "home" currency of the merchant. @readonly
    */
    @property (nonatomic,strong,nullable,readonly) NSString* currency;
    /**
    * The payer id of the merchant. @readonly
    */
    @property (nonatomic,strong,nullable,readonly) NSString* payerId;
    /**
    * The business address of the merchant @readonly
    */
    @property (nonatomic,strong,nullable,readonly) PPRetailInvoiceAddress* address;
    /**
    * The PayPal environment this merchant exists in - live or sandbox. Sandbox means the money is not real! @readonly
    */
    @property (nonatomic,strong,nullable,readonly) NSString* environment;
    /**
    * The invoice total amount above which signature would be collected for swipe transactions.
    */
    @property (nonatomic,strong,nullable) NSDecimalNumber* signatureRequiredAbove;
    /**
    * Run in certification mode.
    */
    @property (nonatomic,assign) BOOL isCertificationMode;
    /**
    * The Partner Attribution Id code that is used for analytics
 * PLEASE NOTE: manipulating this setting (especially upwards) may cause you to be liable for chargebacks in the event we cannot retrieve
 * a signature for the transaction. MODIFY THIS SETTING AT YOUR OWN RISK!
    */
    @property (nonatomic,strong,nullable) NSString* referrerCode;


    
      - (instancetype _Null_unspecified)init;
    
    




    /**
     * Forward a receipt for an invoice.
     */
    -(void)forwardReceipt:(PPRetailInvoice* _Nullable)invoice emailOrSms:(NSString* _Nullable)emailOrSms txNumber:(NSString* _Nullable)txNumber txType:(NSString* _Nullable)txType customerId:(NSString* _Nullable)customerId receiptPreferenceToken:(NSString* _Nullable)receiptPreferenceToken callback:(PPRetailMerchantReceiptForwardedHandler _Nullable)callback;




@end

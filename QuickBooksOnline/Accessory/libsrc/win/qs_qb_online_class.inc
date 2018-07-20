!Region Equates
qsSSPasswordCrypt             EQUATE('9YE934WNV3N77')  

qsqbMinorVersion              equate('&minorversion=4')      

!Attachable  
qsqbAttachableSelectAllActive   equate('SELECT * FROM Attachable')
qsqbAttachableUpdate            equate('/attachable?operation=update')

qsqbAttachableGroup           group,type       
Id                               cstring(20),name('Id')
SyncToken                        cstring(256),name('SyncToken')
MetaData                         group,name('MetaData')
CreateTime                          cstring(31),name('CreateTime')
LastUpdatedTime                     cstring(31),name('LastUpdatedTime')
                                 end  
AttachableRef                    group,name('AttachableRef')
EntityRef                           group,name('EntityRef')
valueEntity                            cstring(256),name('value')             !ID for Customer/Employee/
typeEntity                             cstring(256),name('type')              !Customer/Employee/Vendor
                                    end
LineInfo                            cstring(101),name('LineInfo')
IncludeOnSend                       cstring(6),name('IncludeOnSend')
Inactive                            cstring(6),name('Inactive')
NoRefOnly                           cstring(6),name('NoRefOnly')
CustomField                         group,name('CustomField')
DefinitionId                           cstring(101),name('DefinitionId')
Name                                   cstring(101),name('Name')
Type                                   cstring(101),name('Type')                  
StringValue                            cstring(101),name('StringValue')
                                    end
                                 end
FileName                         cstring(101),name('FileName')
Note                             cstring(2001),name('Note')
FileAccessUri                    cstring(101),name('FileAccessUri')
TempDownloadUri                  cstring(101),name('TempDownloadUri')               
Size                             decimal(10,2),name('Size')
ContentType                      cstring(101),name('ContentType')
Category                         cstring(101),name('Category')
Lat                              cstring(101),name('Lat')
Long                             cstring(101),name('Long')
PlaceName                        cstring(2001),name('PlaceName')
Tag                              cstring(2001),name('Tag')
ThumbnailFileAccessUri           cstring(101),name('ThumbnailFileAccessUri')
ThumbnailTempDownloadUri         cstring(101),name('ThumbnailTempDownloadUri')
sparse                           cstring(6),name('sparse')
                              end

!Customer
qsqbCustomerSelectAllActive   equate('SELECT * FROM Customer WHERE Active=true')
qsqbCustomerSelectID          equate('SELECT * FROM Customer WHERE Id=')
qsqbCustomerUpdate            equate('/customer?operation=update')
qsqbCustomer                  equate('Customer')

qsqbCustomerGroup             group,type
Id                               cstring(20),name('Id')
SyncToken                        cstring(256),name('SyncToken')
MetaData                         group,name('MetaData')
CreateTime                          cstring(31),name('CreateTime')
LastUpdatedTime                     cstring(31),name('LastUpdatedTime')
                                 end 
Title                            cstring(16),name('Title')
GivenName                        cstring(26),name('GivenName')
MiddleName                       cstring(26),name('MiddleName')
FamilyName                       cstring(26),name('FamilyName')
Suffix                           cstring(11),name('Suffix')
DisplayName                      cstring(256),name('DisplayName')
FullyQualifiedName               cstring(101),name('FullyQualifiedName')
CompanyName                      cstring(101),name('CompanyName')
PrintOnCheckName                 cstring(101),name('PrintOnCheckName')
Active                           cstring(6),name('Active')
PrimaryPhone                     group,name('PrimaryPhone')
FreeFormNumberPrimary               cstring(256),name('FreeFormNumber')
                                 end
AlternatePhone                   group,name('AlternatePhone')
FreeFormNumberAlternate             cstring(256),name('FreeFormNumber')
                                 end   
Mobile                           group,name('Mobile')                 
FreeFormNumberMobile                cstring(21),name('FreeFormNumber')
                                 end 
Fax                              group,name('Fax')                          
FreeFormNumberFax                   cstring(21),name('FreeFormNumber')
                                 end
PrimaryEmailAddr                 group,name('PrimaryEmailAddr')
Address                             cstring(101),name('Address')
                                 end
WebAddr                          group,name('WebAddr')
URI                                 cstring(1001),name('URI')
                                 end
DefaultTaxCodeRef                group,name('DefaultTaxCodeRef') 
valueTaxCode                        cstring(256),name('value')
nameTaxCode                         cstring(256),name('name')
                                 end
Taxable                          cstring(256),name('Taxable')
TaxExemptionReasonId             long,name('TaxExemptionReasonId')
BillAddr                         group,name('BillAddr')
BillAddrId                          long,name('Id')
Line1                               cstring(256),name('Line1')
Line2                               cstring(256),name('Line2')
Line3                               cstring(256),name('Line3')
Line4                               cstring(256),name('Line4')
Line5                               cstring(256),name('Line5')
City                                cstring(256),name('City')
Country                             cstring(256),name('Country')
CountrySubDivisionCode              cstring(256),name('CountrySubDivisionCode')
PostalCode                          cstring(256),name('PostalCode')
Lat                                 real,name('Lat')
Long                                real,name('Long')
                                 end    
ShipAddr                         group,name('ShipAddr')
ShipAddrId                              long,name('Id')
Line1Ship                               cstring(256),name('Line1')
Line2Ship                               cstring(256),name('Line2')
Line3Ship                               cstring(256),name('Line3')
Line4Ship                               cstring(256),name('Line4')
Line5Ship                               cstring(256),name('Line5')
CityShip                                cstring(256),name('City')
CountryShip                             cstring(256),name('Country')
CountrySubDivisionCodeShip              cstring(256),name('CountrySubDivisionCode')
PostalCodeShip                          cstring(256),name('PostalCode')
LatShip                                 real,name('Lat')
LongShip                                real,name('Long')
                                 end
Notes                            cstring(2001),name('Notes')
Job                              cstring(6),name('Job')
BillWithParent                   cstring(6),name('BillWithParent')
ParentRef                        group,name('ParentRef')
valueParent                         cstring(256),name('value')
nameParent                          cstring(256),name('name')
                                 end
Level                            cstring(6),name('Level')
SalesTermRef                     group,name('SalesTermRef')
valueSalesTerm                      cstring(256),name('value')
nameSalesTerm                       cstring(256),name('name')
                                 end
PaymentMethodRef                 group,name('PaymentMethodRef')
valuePaymentMethod                  cstring(256),name('value')
namePaymentMethod                   cstring(256),name('name')
                                 end
Balance                          decimal(13,2),name('Balance')
OpenBalanceDate                  group,name('OpenBalanceDate')
dateBalance                         cstring(21),name('date')
                                 end
BalanceWithJobs                  decimal(13,2),name('BalanceWithJobs')
CurrencyRef                      group,name('CurrencyRef')
valueCurrency                       cstring(256),name('value')
nameCurrency                        cstring(256),name('name')
                                 end
PreferredDeliveryMethod          cstring(11),name('PreferredDeliveryMethod')
sparse                           cstring(6),name('sparse')
                              end

!Employee
qsqbEmployeeSelectAllActive   equate('SELECT * FROM Employee WHERE Active=true')
qsqbEmployeeSelectId          equate('SELECT * FROM Employee WHERE Id=')
qsqbEmployeeUpdate            equate('/employee?operation=update')
qsqbEmployee                  equate('Employee')

qsqbEmployeeGroup             group,type
Id                               cstring(256),name('Id')
SyncToken                        cstring(256),name('SyncToken')    
MetaData                         group,name('MetaData')
CreateTime                          cstring(31),name('CreateTime')
LastUpdatedTime                     cstring(31),name('LastUpdatedTime')
                                 end
Organization                     cstring(6),name('Organization')
Title                            cstring(16),name('Title')
GivenName                        cstring(26),name('GivenName')
MiddleName                       cstring(26),name('MiddleName')
FamilyName                       cstring(26),name('FamilyName')
Suffix                           cstring(11),name('Suffix')
DisplayName                      cstring(101),name('DisplayName')
PrintOnCheckName                 cstring(101),name('PrintOnCheckName')
Active                           cstring(6),name('Active')
PrimaryPhone                     group,name('PrimaryPhone')
FreeFormNumberPrimary               cstring(21),name('FreeFormNumber')
                                 end
Mobile                           group,name('Mobile')                 
FreeFormNumberMobile                cstring(21),name('FreeFormNumber')
                                 end
PrimaryEmailAddr                 group,name('PrimaryEmailAddr')
Address                             cstring(101),name('Address')
                                 end
EmployeeNumber                   cstring(101),name('EmployeeNumber')
SSN                              cstring(101),name('SSN')
PrimaryAddr                      group,name('PrimaryAddr')
PrimaryAddrId                       cstring(256),name('Id')
Line1                               cstring(501),name('Line1')
Line2                               cstring(501),name('Line2')
Line3                               cstring(501),name('Line3')
Line4                               cstring(501),name('Line4')
Line5                               cstring(501),name('Line5')
City                                cstring(256),name('City')
Country                             cstring(256),name('Country')
CountrySubDivisionCode              cstring(256),name('CountrySubDivisionCode')
PostalCode                          cstring(31),name('PostalCode')
Lat                                 cstring(11),name('Lat')
Long                                cstring(11),name('Long')
                                 end
BillableTime                     cstring(6),name('BillableTime')
BillRate                         decimal(13,2),name('BillRate')
BirthDate                        group,name('BirthDate')
dateBirth                           cstring(21),name('date')
                                 end
Gender                           cstring(11),name('Gender')
HiredDate                        group,name('HiredDate')                  
dateHired                           cstring(21),name('date')
                                 end
ReleasedDate                     group,name('ReleasedDate')
dateReleased                        cstring(21),name('date')
                                 end  
sparse                           cstring(6),name('sparse')
                              end

!Vendor                    
qsqbVendorSelectAllActive     equate('SELECT * FROM Vendor WHERE Active=true')
qsqbVendorSelectId            equate('SELECT * FROM Vendor WHERE Id=')
qsqbVendorUpdate              equate('/vendor?operation=update')
qsqbVendor                    equate('Vendor')

qsqbVendorGroup               group,type
Id                               cstring(256),name('Id')
SyncToken                        cstring(256),name('SyncToken')
MetaData                         group,name('MetaData')
CreateTime                          cstring(31),name('CreateTime')
LastUpdatedTime                     cstring(31),name('LastUpdatedTime')
                                 end  
Title                            cstring(16),name('Title')
GivenName                        cstring(26),name('GivenName')
MiddleName                       cstring(26),name('MiddleName')
FamilyName                       cstring(26),name('FamilyName')
Suffix                           cstring(11),name('Suffix')
DisplayName                      cstring(101),name('DisplayName')  
CompanyName                      cstring(101),name('CompanyName')
PrintOnCheckName                 cstring(101),name('PrintOnCheckName')
Active                           cstring(6),name('Active')   
PrimaryPhone                     group,name('PrimaryPhone')
FreeFormNumberPrimary               cstring(256),name('FreeFormNumber')
                                 end
AlternatePhone                   group,name('AlternatePhone')
FreeFormNumberAlternate             cstring(256),name('FreeFormNumber')
                                 end   
Mobile                           group,name('Mobile')                 
FreeFormNumberMobile                cstring(21),name('FreeFormNumber')
                                 end 
Fax                              group,name('Fax')                          
FreeFormNumberFax                   cstring(21),name('FreeFormNumber')
                                 end
PrimaryEmailAddr                 group,name('PrimaryEmailAddr')
Address                             cstring(101),name('Address')
                                 end
WebAddr                          group,name('WebAddr')
URI                                 cstring(1001),name('URI')
                                 end
BillAddr                         group,name('BillAddr')
Line1                               cstring(256),name('Line1')
Line2                               cstring(256),name('Line2')
Line3                               cstring(256),name('Line3')
Line4                               cstring(256),name('Line4')
Line5                               cstring(256),name('Line5')
City                                cstring(256),name('City')
Country                             cstring(256),name('Country')
CountrySubDivisionCode              cstring(256),name('CountrySubDivisionCode')
PostalCode                          cstring(256),name('PostalCode')
Lat                                 real,name('Lat')
Long                                real,name('Long')
                                 end 
TaxIdentifier                    cstring(101),name('TaxIdentifier')
TermRef                          group,name('TermRef')
valueTerm                           cstring(256),name('value')
nameTerm                            cstring(256),name('name')
                                 end
Balance                          decimal(13,2),name('Balance')
AcctNum                          cstring(101),name('AcctNum')
Vendor1099                       cstring(6),name('Vendor1099')
CurrencyRef                      group,name('CurrencyRef')
valueCurrency                       cstring(256),name('value')
nameCurrency                        cstring(256),name('name')
                                 end         
sparse                           cstring(6),name('sparse')
                              end

!error
qsqbErrorReturnGroupJSON        group,type
message                          STRING(255)
detail                           STRING(255)
code                             STRING(255)
element                          STRING(255)
                              end

!endRegion

! Module Data


! Internal Properties - do not change


!region Class SaleSure (SS)
!--------------------------------------------------------------------------------
qs_qb_online_class            CLASS,TYPE,MODULE('qs_qb_online_class.clw'),LINK('qs_qb_online_class.clw')


! Methods

!Region Count number of records and change tab heading accordingly
!CountAddresses                   PROCEDURE(LONG pSysIdReferenceType, LONG pSysIdReference, *cstring pDBOwner), LONG  
!CountDFD                         PROCEDURE(StringTheory pDFDstClass, *cstring pDBOwner, STRING pMessage), LONG     
!!endRegion                
!
!EnCryptString                    PROCEDURE(*STRING pEnCryptString), LONG
!GetClarionDateFromString         PROCEDURE(String pStringDate), DATE
!!PopulateDateChange               PROCEDURE(NetWebServerWorker p_web, DATE pDate, TIME pTime), STRING   
!!PopulateUserCreateChange         PROCEDURE(NetWebServerWorker p_web, String pUserCreate, Date pCreateDate, Time pCreateTime, String pUserChange, DATE pChangeDate, TIME pChangeTime), STRING

                              end !Class
!endRegion
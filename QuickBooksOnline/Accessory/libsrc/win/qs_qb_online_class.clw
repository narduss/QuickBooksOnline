                              MEMBER()
         
                              MAP
                              END       

!Region Includes         
   INCLUDE('qs_qb_online_class.inc'),once
!   INCLUDE('Cryptonite.inc'),once     
!   INCLUDE('StringTheory.inc'),once
!   INCLUDE('DynFile.inc'),once   
!EndRegion

   
!--------------------------------------------------------------------------------------------- 
!Count the number of Addresses and return color for tab to show there are Addresses      
!qs_SS_Main_Class.CountAddresses     PROCEDURE(LONG pSysIdReferenceType, LONG pSysIdReference, *CSTRING pDBOwner)!, LONG
!cDFDstClass                            StringTheory        
!cLOC:Number                            LONG
!
!   CODE
!   cLOC:Number  =  0
!   cDFDstClass.Assign('SELECT Count(SysIdAddress) As Number '&|
!      'FROM Address '&|
!      'WHERE SysIdReferenceType = ' & pSysIdReferenceType & ' and SysIdReference = ' & pSysIdReference)             
!   cLOC:Number = Self.CountDFD(cDFDstClass,pDBOwner,'Address')
!   cDFDstClass.Free()   
!   Return cLOC:Number      
   

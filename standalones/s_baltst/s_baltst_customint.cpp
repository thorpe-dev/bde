// s_baltst_customint.cpp          *DO NOT EDIT*           @generated -*-C++-*-

#include <bsls_ident.h>
BSLS_IDENT_RCSID(s_baltst_customint_cpp, "$Id$ $CSID$")

#include <s_baltst_customint.h>

#include <bdlat_formattingmode.h>
#include <bdlat_valuetypefunctions.h>
#include <bdlde_utf8util.h>
#include <bdlb_print.h>
#include <bdlb_printmethods.h>
#include <bdlb_string.h>

#include <bslim_printer.h>
#include <bsls_assert.h>

#include <bsl_cstring.h>
#include <bsl_iomanip.h>
#include <bsl_limits.h>
#include <bsl_ostream.h>
#include <bsl_utility.h>

namespace BloombergLP {
namespace s_baltst {

                              // ---------------
                              // class CustomInt
                              // ---------------

// PUBLIC CLASS METHODS

int CustomInt::checkRestrictions(const int& value)
{
    if (1000 < value) {
        return -1;
    }

    return 0;
}

// CONSTANTS

const char CustomInt::CLASS_NAME[] = "CustomInt";


}  // close package namespace
}  // close enterprise namespace

// GENERATED BY BLP_BAS_CODEGEN_2021.10.31
// USING bas_codegen.pl s_baltst_customint.xsd --mode msg --includedir . --msgComponent customint --noRecurse --noExternalization --noHashSupport --noAggregateConversion
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright 2021 Bloomberg Finance L.P. All rights reserved.
//      Property of Bloomberg Finance L.P. (BFLP)
//      This software is made available solely pursuant to the
//      terms of a BFLP license agreement which governs its use.
// ------------------------------- END-OF-FILE --------------------------------

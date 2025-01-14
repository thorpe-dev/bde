// s_baltst_voidsequence.cpp         *DO NOT EDIT*         @generated -*-C++-*-

#include <bsls_ident.h>
BSLS_IDENT_RCSID(s_baltst_voidsequence_cpp, "$Id$ $CSID$")

#include <s_baltst_voidsequence.h>

#include <bdlat_formattingmode.h>
#include <bdlat_valuetypefunctions.h>
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

                             // ------------------
                             // class VoidSequence
                             // ------------------

// CONSTANTS

const char VoidSequence::CLASS_NAME[] = "VoidSequence";


// CLASS METHODS

const bdlat_AttributeInfo *VoidSequence::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    (void)name;
    (void)nameLength;
    return 0;
}

const bdlat_AttributeInfo *VoidSequence::lookupAttributeInfo(int id)
{
    switch (id) {
      default:
        return 0;
    }
}

// CREATORS

VoidSequence::VoidSequence()
{
}

VoidSequence::VoidSequence(const VoidSequence& original)
{
    (void)original;
}

VoidSequence::~VoidSequence()
{
}

// MANIPULATORS

VoidSequence&
VoidSequence::operator=(const VoidSequence& rhs)
{
    (void)rhs;
    return *this;
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
VoidSequence&
VoidSequence::operator=(VoidSequence&& rhs)
{
    (void)rhs;
    return *this;
}
#endif

void VoidSequence::reset()
{
}

// ACCESSORS

bsl::ostream& VoidSequence::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    (void)level;
    (void)spacesPerLevel;
    return stream;
}


}  // close package namespace
}  // close enterprise namespace

// GENERATED BY BLP_BAS_CODEGEN_2021.10.31
// USING bas_codegen.pl s_baltst_voidsequence.xsd --mode msg --includedir . --msgComponent voidsequence --noRecurse --noExternalization --noHashSupport --noAggregateConversion
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright 2021 Bloomberg Finance L.P. All rights reserved.
//      Property of Bloomberg Finance L.P. (BFLP)
//      This software is made available solely pursuant to the
//      terms of a BFLP license agreement which governs its use.
// ------------------------------- END-OF-FILE --------------------------------

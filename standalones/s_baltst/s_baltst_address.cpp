// s_baltst_address.cpp           *DO NOT EDIT*            @generated -*-C++-*-

#include <bsls_ident.h>
BSLS_IDENT_RCSID(s_baltst_address_cpp, "$Id$ $CSID$")

#include <s_baltst_address.h>

#include <bdlat_formattingmode.h>
#include <bdlat_valuetypefunctions.h>
#include <bdlb_print.h>
#include <bdlb_printmethods.h>
#include <bdlb_string.h>

#include <bsl_string.h>
#include <bslim_printer.h>
#include <bsls_assert.h>

#include <bsl_cstring.h>
#include <bsl_iomanip.h>
#include <bsl_limits.h>
#include <bsl_ostream.h>
#include <bsl_utility.h>

namespace BloombergLP {
namespace s_baltst {

                               // -------------
                               // class Address
                               // -------------

// CONSTANTS

const char Address::CLASS_NAME[] = "Address";

const bdlat_AttributeInfo Address::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_STREET,
        "street",
        sizeof("street") - 1,
        "",
        bdlat_FormattingMode::e_TEXT
    },
    {
        ATTRIBUTE_ID_CITY,
        "city",
        sizeof("city") - 1,
        "",
        bdlat_FormattingMode::e_TEXT
    },
    {
        ATTRIBUTE_ID_STATE,
        "state",
        sizeof("state") - 1,
        "",
        bdlat_FormattingMode::e_TEXT
    }
};

// CLASS METHODS

const bdlat_AttributeInfo *Address::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 3; ++i) {
        const bdlat_AttributeInfo& attributeInfo =
                    Address::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdlat_AttributeInfo *Address::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_STREET:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STREET];
      case ATTRIBUTE_ID_CITY:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CITY];
      case ATTRIBUTE_ID_STATE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STATE];
      default:
        return 0;
    }
}

// CREATORS

Address::Address(bslma::Allocator *basicAllocator)
: d_street(basicAllocator)
, d_city(basicAllocator)
, d_state(basicAllocator)
{
}

Address::Address(const Address& original,
                 bslma::Allocator *basicAllocator)
: d_street(original.d_street, basicAllocator)
, d_city(original.d_city, basicAllocator)
, d_state(original.d_state, basicAllocator)
{
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
Address::Address(Address&& original) noexcept
: d_street(bsl::move(original.d_street))
, d_city(bsl::move(original.d_city))
, d_state(bsl::move(original.d_state))
{
}

Address::Address(Address&& original,
                 bslma::Allocator *basicAllocator)
: d_street(bsl::move(original.d_street), basicAllocator)
, d_city(bsl::move(original.d_city), basicAllocator)
, d_state(bsl::move(original.d_state), basicAllocator)
{
}
#endif

Address::~Address()
{
}

// MANIPULATORS

Address&
Address::operator=(const Address& rhs)
{
    if (this != &rhs) {
        d_street = rhs.d_street;
        d_city = rhs.d_city;
        d_state = rhs.d_state;
    }

    return *this;
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
Address&
Address::operator=(Address&& rhs)
{
    if (this != &rhs) {
        d_street = bsl::move(rhs.d_street);
        d_city = bsl::move(rhs.d_city);
        d_state = bsl::move(rhs.d_state);
    }

    return *this;
}
#endif

void Address::reset()
{
    bdlat_ValueTypeFunctions::reset(&d_street);
    bdlat_ValueTypeFunctions::reset(&d_city);
    bdlat_ValueTypeFunctions::reset(&d_state);
}

// ACCESSORS

bsl::ostream& Address::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("street", this->street());
    printer.printAttribute("city", this->city());
    printer.printAttribute("state", this->state());
    printer.end();
    return stream;
}


}  // close package namespace
}  // close enterprise namespace

// GENERATED BY BLP_BAS_CODEGEN_2021.10.31
// USING bas_codegen.pl s_baltst_address.xsd --mode msg --includedir . --msgComponent address --noRecurse --noExternalization --noHashSupport --noAggregateConversion
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright 2021 Bloomberg Finance L.P. All rights reserved.
//      Property of Bloomberg Finance L.P. (BFLP)
//      This software is made available solely pursuant to the
//      terms of a BFLP license agreement which governs its use.
// ------------------------------- END-OF-FILE --------------------------------

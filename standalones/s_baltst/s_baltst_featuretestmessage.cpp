// s_baltst_featuretestmessage.cpp      *DO NOT EDIT*      @generated -*-C++-*-

#include <bsls_ident.h>
BSLS_IDENT_RCSID(s_baltst_featuretestmessage_cpp, "$Id$ $CSID$")

#include <s_baltst_featuretestmessage.h>

#include <bdlat_formattingmode.h>
#include <bdlat_valuetypefunctions.h>
#include <bdlb_print.h>
#include <bdlb_printmethods.h>
#include <bdlb_string.h>

#include <bdlt_datetimetz.h>
#include <bsl_vector.h>
#include <s_baltst_customstring.h>
#include <s_baltst_enumerated.h>
#include <s_baltst_ratsnest.h>
#include <s_baltst_sequencewithanonymity.h>
#include <s_baltst_unsignedsequence.h>
#include <s_baltst_voidsequence.h>
#include <bslim_printer.h>
#include <bsls_assert.h>

#include <bsl_cstring.h>
#include <bsl_iomanip.h>
#include <bsl_limits.h>
#include <bsl_ostream.h>
#include <bsl_utility.h>

namespace BloombergLP {
namespace s_baltst {

                          // ------------------------
                          // class FeatureTestMessage
                          // ------------------------

// CONSTANTS

const char FeatureTestMessage::CLASS_NAME[] = "FeatureTestMessage";

const bdlat_SelectionInfo FeatureTestMessage::SELECTION_INFO_ARRAY[] = {
    {
        SELECTION_ID_SELECTION1,
        "selection1",
        sizeof("selection1") - 1,
        "",
        bdlat_FormattingMode::e_DEFAULT
    },
    {
        SELECTION_ID_SELECTION2,
        "selection2",
        sizeof("selection2") - 1,
        "",
        bdlat_FormattingMode::e_HEX
    },
    {
        SELECTION_ID_SELECTION3,
        "selection3",
        sizeof("selection3") - 1,
        "",
        bdlat_FormattingMode::e_DEFAULT
    },
    {
        SELECTION_ID_SELECTION4,
        "selection4",
        sizeof("selection4") - 1,
        "",
        bdlat_FormattingMode::e_DEFAULT
    },
    {
        SELECTION_ID_SELECTION5,
        "selection5",
        sizeof("selection5") - 1,
        "",
        bdlat_FormattingMode::e_DEFAULT
    },
    {
        SELECTION_ID_SELECTION6,
        "selection6",
        sizeof("selection6") - 1,
        "",
        bdlat_FormattingMode::e_TEXT
    },
    {
        SELECTION_ID_SELECTION7,
        "selection7",
        sizeof("selection7") - 1,
        "",
        bdlat_FormattingMode::e_DEFAULT
    },
    {
        SELECTION_ID_SELECTION8,
        "selection8",
        sizeof("selection8") - 1,
        "",
        bdlat_FormattingMode::e_DEFAULT
    },
    {
        SELECTION_ID_SELECTION9,
        "selection9",
        sizeof("selection9") - 1,
        "",
        bdlat_FormattingMode::e_DEFAULT
    },
    {
        SELECTION_ID_SELECTION10,
        "selection10",
        sizeof("selection10") - 1,
        "",
        bdlat_FormattingMode::e_DEFAULT
    },
    {
        SELECTION_ID_SELECTION11,
        "selection11",
        sizeof("selection11") - 1,
        "",
        bdlat_FormattingMode::e_DEFAULT
    }
};

// CLASS METHODS

const bdlat_SelectionInfo *FeatureTestMessage::lookupSelectionInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 11; ++i) {
        const bdlat_SelectionInfo& selectionInfo =
                    FeatureTestMessage::SELECTION_INFO_ARRAY[i];

        if (nameLength == selectionInfo.d_nameLength
        &&  0 == bsl::memcmp(selectionInfo.d_name_p, name, nameLength))
        {
            return &selectionInfo;
        }
    }

    return 0;
}

const bdlat_SelectionInfo *FeatureTestMessage::lookupSelectionInfo(int id)
{
    switch (id) {
      case SELECTION_ID_SELECTION1:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION1];
      case SELECTION_ID_SELECTION2:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION2];
      case SELECTION_ID_SELECTION3:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION3];
      case SELECTION_ID_SELECTION4:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION4];
      case SELECTION_ID_SELECTION5:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION5];
      case SELECTION_ID_SELECTION6:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION6];
      case SELECTION_ID_SELECTION7:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION7];
      case SELECTION_ID_SELECTION8:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION8];
      case SELECTION_ID_SELECTION9:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION9];
      case SELECTION_ID_SELECTION10:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION10];
      case SELECTION_ID_SELECTION11:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION11];
      default:
        return 0;
    }
}

// CREATORS

FeatureTestMessage::FeatureTestMessage(
    const FeatureTestMessage& original,
    bslma::Allocator *basicAllocator)
: d_selectionId(original.d_selectionId)
, d_allocator_p(bslma::Default::allocator(basicAllocator))
{
    switch (d_selectionId) {
      case SELECTION_ID_SELECTION1: {
        new (d_selection1.buffer())
            s_baltst::Sequence1(
                original.d_selection1.object(), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION2: {
        new (d_selection2.buffer())
            bsl::vector<char>(
                original.d_selection2.object(), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION3: {
        new (d_selection3.buffer())
            s_baltst::Sequence2(
                original.d_selection3.object(), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION4: {
        d_selection4 = new (*d_allocator_p)
                s_baltst::Sequence3(*original.d_selection4, d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION5: {
        new (d_selection5.buffer())
            bdlt::DatetimeTz(original.d_selection5.object());
      } break;
      case SELECTION_ID_SELECTION6: {
        new (d_selection6.buffer())
            s_baltst::CustomString(
                original.d_selection6.object(), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION7: {
        new (d_selection7.buffer())
            s_baltst::Enumerated::Value(original.d_selection7.object());
      } break;
      case SELECTION_ID_SELECTION8: {
        new (d_selection8.buffer())
            s_baltst::Choice3(
                original.d_selection8.object(), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION9: {
        new (d_selection9.buffer())
            s_baltst::VoidSequence(original.d_selection9.object());
      } break;
      case SELECTION_ID_SELECTION10: {
        new (d_selection10.buffer())
            s_baltst::UnsignedSequence(original.d_selection10.object());
      } break;
      case SELECTION_ID_SELECTION11: {
        new (d_selection11.buffer())
            s_baltst::SequenceWithAnonymity(
                original.d_selection11.object(), d_allocator_p);
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
FeatureTestMessage::FeatureTestMessage(FeatureTestMessage&& original) noexcept
: d_selectionId(original.d_selectionId)
, d_allocator_p(original.d_allocator_p)
{
    switch (d_selectionId) {
      case SELECTION_ID_SELECTION1: {
        new (d_selection1.buffer())
            s_baltst::Sequence1(
                bsl::move(original.d_selection1.object()), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION2: {
        new (d_selection2.buffer())
            bsl::vector<char>(
                bsl::move(original.d_selection2.object()), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION3: {
        new (d_selection3.buffer())
            s_baltst::Sequence2(
                bsl::move(original.d_selection3.object()), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION4: {
        d_selection4 = original.d_selection4;
        original.d_selectionId = SELECTION_ID_UNDEFINED;
      } break;
      case SELECTION_ID_SELECTION5: {
        new (d_selection5.buffer())
            bdlt::DatetimeTz(bsl::move(original.d_selection5.object()));
      } break;
      case SELECTION_ID_SELECTION6: {
        new (d_selection6.buffer())
            s_baltst::CustomString(
                bsl::move(original.d_selection6.object()), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION7: {
        new (d_selection7.buffer())
            s_baltst::Enumerated::Value(bsl::move(original.d_selection7.object()));
      } break;
      case SELECTION_ID_SELECTION8: {
        new (d_selection8.buffer())
            s_baltst::Choice3(
                bsl::move(original.d_selection8.object()), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION9: {
        new (d_selection9.buffer())
            s_baltst::VoidSequence(bsl::move(original.d_selection9.object()));
      } break;
      case SELECTION_ID_SELECTION10: {
        new (d_selection10.buffer())
            s_baltst::UnsignedSequence(bsl::move(original.d_selection10.object()));
      } break;
      case SELECTION_ID_SELECTION11: {
        new (d_selection11.buffer())
            s_baltst::SequenceWithAnonymity(
                bsl::move(original.d_selection11.object()), d_allocator_p);
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }
}

FeatureTestMessage::FeatureTestMessage(
    FeatureTestMessage&& original,
    bslma::Allocator *basicAllocator)
: d_selectionId(original.d_selectionId)
, d_allocator_p(bslma::Default::allocator(basicAllocator))
{
    switch (d_selectionId) {
      case SELECTION_ID_SELECTION1: {
        new (d_selection1.buffer())
            s_baltst::Sequence1(
                bsl::move(original.d_selection1.object()), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION2: {
        new (d_selection2.buffer())
            bsl::vector<char>(
                bsl::move(original.d_selection2.object()), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION3: {
        new (d_selection3.buffer())
            s_baltst::Sequence2(
                bsl::move(original.d_selection3.object()), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION4: {
        if (d_allocator_p == original.d_allocator_p) {
            d_selection4 = original.d_selection4;
            original.d_selectionId = SELECTION_ID_UNDEFINED;
        }
        else {
            d_selection4 = new (*d_allocator_p)
                    s_baltst::Sequence3(bsl::move(*original.d_selection4), d_allocator_p);
        }
      } break;
      case SELECTION_ID_SELECTION5: {
        new (d_selection5.buffer())
            bdlt::DatetimeTz(bsl::move(original.d_selection5.object()));
      } break;
      case SELECTION_ID_SELECTION6: {
        new (d_selection6.buffer())
            s_baltst::CustomString(
                bsl::move(original.d_selection6.object()), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION7: {
        new (d_selection7.buffer())
            s_baltst::Enumerated::Value(bsl::move(original.d_selection7.object()));
      } break;
      case SELECTION_ID_SELECTION8: {
        new (d_selection8.buffer())
            s_baltst::Choice3(
                bsl::move(original.d_selection8.object()), d_allocator_p);
      } break;
      case SELECTION_ID_SELECTION9: {
        new (d_selection9.buffer())
            s_baltst::VoidSequence(bsl::move(original.d_selection9.object()));
      } break;
      case SELECTION_ID_SELECTION10: {
        new (d_selection10.buffer())
            s_baltst::UnsignedSequence(bsl::move(original.d_selection10.object()));
      } break;
      case SELECTION_ID_SELECTION11: {
        new (d_selection11.buffer())
            s_baltst::SequenceWithAnonymity(
                bsl::move(original.d_selection11.object()), d_allocator_p);
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }
}
#endif

// MANIPULATORS

FeatureTestMessage&
FeatureTestMessage::operator=(const FeatureTestMessage& rhs)
{
    if (this != &rhs) {
        switch (rhs.d_selectionId) {
          case SELECTION_ID_SELECTION1: {
            makeSelection1(rhs.d_selection1.object());
          } break;
          case SELECTION_ID_SELECTION2: {
            makeSelection2(rhs.d_selection2.object());
          } break;
          case SELECTION_ID_SELECTION3: {
            makeSelection3(rhs.d_selection3.object());
          } break;
          case SELECTION_ID_SELECTION4: {
            makeSelection4(*rhs.d_selection4);
          } break;
          case SELECTION_ID_SELECTION5: {
            makeSelection5(rhs.d_selection5.object());
          } break;
          case SELECTION_ID_SELECTION6: {
            makeSelection6(rhs.d_selection6.object());
          } break;
          case SELECTION_ID_SELECTION7: {
            makeSelection7(rhs.d_selection7.object());
          } break;
          case SELECTION_ID_SELECTION8: {
            makeSelection8(rhs.d_selection8.object());
          } break;
          case SELECTION_ID_SELECTION9: {
            makeSelection9(rhs.d_selection9.object());
          } break;
          case SELECTION_ID_SELECTION10: {
            makeSelection10(rhs.d_selection10.object());
          } break;
          case SELECTION_ID_SELECTION11: {
            makeSelection11(rhs.d_selection11.object());
          } break;
          default:
            BSLS_ASSERT(SELECTION_ID_UNDEFINED == rhs.d_selectionId);
            reset();
        }
    }

    return *this;
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
FeatureTestMessage&
FeatureTestMessage::operator=(FeatureTestMessage&& rhs)
{
    if (this != &rhs) {
        switch (rhs.d_selectionId) {
          case SELECTION_ID_SELECTION1: {
            makeSelection1(bsl::move(rhs.d_selection1.object()));
          } break;
          case SELECTION_ID_SELECTION2: {
            makeSelection2(bsl::move(rhs.d_selection2.object()));
          } break;
          case SELECTION_ID_SELECTION3: {
            makeSelection3(bsl::move(rhs.d_selection3.object()));
          } break;
          case SELECTION_ID_SELECTION4: {
            if (d_allocator_p == rhs.d_allocator_p) {
                reset();
                d_selection4 = rhs.d_selection4;
                d_selectionId = SELECTION_ID_SELECTION4;
                rhs.d_selectionId = SELECTION_ID_UNDEFINED;
            }
            else {
                makeSelection4(bsl::move(*rhs.d_selection4));
            }
          } break;
          case SELECTION_ID_SELECTION5: {
            makeSelection5(bsl::move(rhs.d_selection5.object()));
          } break;
          case SELECTION_ID_SELECTION6: {
            makeSelection6(bsl::move(rhs.d_selection6.object()));
          } break;
          case SELECTION_ID_SELECTION7: {
            makeSelection7(bsl::move(rhs.d_selection7.object()));
          } break;
          case SELECTION_ID_SELECTION8: {
            makeSelection8(bsl::move(rhs.d_selection8.object()));
          } break;
          case SELECTION_ID_SELECTION9: {
            makeSelection9(bsl::move(rhs.d_selection9.object()));
          } break;
          case SELECTION_ID_SELECTION10: {
            makeSelection10(bsl::move(rhs.d_selection10.object()));
          } break;
          case SELECTION_ID_SELECTION11: {
            makeSelection11(bsl::move(rhs.d_selection11.object()));
          } break;
          default:
            BSLS_ASSERT(SELECTION_ID_UNDEFINED == rhs.d_selectionId);
            reset();
        }
    }

    return *this;
}
#endif

void FeatureTestMessage::reset()
{
    switch (d_selectionId) {
      case SELECTION_ID_SELECTION1: {
        typedef s_baltst::Sequence1 Type;
        d_selection1.object().~Type();
      } break;
      case SELECTION_ID_SELECTION2: {
        typedef bsl::vector<char> Type;
        d_selection2.object().~Type();
      } break;
      case SELECTION_ID_SELECTION3: {
        typedef s_baltst::Sequence2 Type;
        d_selection3.object().~Type();
      } break;
      case SELECTION_ID_SELECTION4: {
        d_allocator_p->deleteObject(d_selection4);
      } break;
      case SELECTION_ID_SELECTION5: {
        // no destruction required
      } break;
      case SELECTION_ID_SELECTION6: {
        typedef s_baltst::CustomString Type;
        d_selection6.object().~Type();
      } break;
      case SELECTION_ID_SELECTION7: {
        typedef s_baltst::Enumerated::Value Type;
        d_selection7.object().~Type();
      } break;
      case SELECTION_ID_SELECTION8: {
        typedef s_baltst::Choice3 Type;
        d_selection8.object().~Type();
      } break;
      case SELECTION_ID_SELECTION9: {
        typedef s_baltst::VoidSequence Type;
        d_selection9.object().~Type();
      } break;
      case SELECTION_ID_SELECTION10: {
        typedef s_baltst::UnsignedSequence Type;
        d_selection10.object().~Type();
      } break;
      case SELECTION_ID_SELECTION11: {
        typedef s_baltst::SequenceWithAnonymity Type;
        d_selection11.object().~Type();
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    d_selectionId = SELECTION_ID_UNDEFINED;
}

int FeatureTestMessage::makeSelection(int selectionId)
{
    switch (selectionId) {
      case SELECTION_ID_SELECTION1: {
        makeSelection1();
      } break;
      case SELECTION_ID_SELECTION2: {
        makeSelection2();
      } break;
      case SELECTION_ID_SELECTION3: {
        makeSelection3();
      } break;
      case SELECTION_ID_SELECTION4: {
        makeSelection4();
      } break;
      case SELECTION_ID_SELECTION5: {
        makeSelection5();
      } break;
      case SELECTION_ID_SELECTION6: {
        makeSelection6();
      } break;
      case SELECTION_ID_SELECTION7: {
        makeSelection7();
      } break;
      case SELECTION_ID_SELECTION8: {
        makeSelection8();
      } break;
      case SELECTION_ID_SELECTION9: {
        makeSelection9();
      } break;
      case SELECTION_ID_SELECTION10: {
        makeSelection10();
      } break;
      case SELECTION_ID_SELECTION11: {
        makeSelection11();
      } break;
      case SELECTION_ID_UNDEFINED: {
        reset();
      } break;
      default:
        return -1;
    }
    return 0;
}

int FeatureTestMessage::makeSelection(const char *name, int nameLength)
{
    const bdlat_SelectionInfo *selectionInfo =
                                         lookupSelectionInfo(name, nameLength);
    if (0 == selectionInfo) {
       return -1;
    }

    return makeSelection(selectionInfo->d_id);
}

s_baltst::Sequence1& FeatureTestMessage::makeSelection1()
{
    if (SELECTION_ID_SELECTION1 == d_selectionId) {
        bdlat_ValueTypeFunctions::reset(&d_selection1.object());
    }
    else {
        reset();
        new (d_selection1.buffer())
                s_baltst::Sequence1(d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION1;
    }

    return d_selection1.object();
}

s_baltst::Sequence1& FeatureTestMessage::makeSelection1(const s_baltst::Sequence1& value)
{
    if (SELECTION_ID_SELECTION1 == d_selectionId) {
        d_selection1.object() = value;
    }
    else {
        reset();
        new (d_selection1.buffer())
                s_baltst::Sequence1(value, d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION1;
    }

    return d_selection1.object();
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
s_baltst::Sequence1& FeatureTestMessage::makeSelection1(s_baltst::Sequence1&& value)
{
    if (SELECTION_ID_SELECTION1 == d_selectionId) {
        d_selection1.object() = bsl::move(value);
    }
    else {
        reset();
        new (d_selection1.buffer())
                s_baltst::Sequence1(bsl::move(value), d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION1;
    }

    return d_selection1.object();
}
#endif

bsl::vector<char>& FeatureTestMessage::makeSelection2()
{
    if (SELECTION_ID_SELECTION2 == d_selectionId) {
        bdlat_ValueTypeFunctions::reset(&d_selection2.object());
    }
    else {
        reset();
        new (d_selection2.buffer())
                bsl::vector<char>(d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION2;
    }

    return d_selection2.object();
}

bsl::vector<char>& FeatureTestMessage::makeSelection2(const bsl::vector<char>& value)
{
    if (SELECTION_ID_SELECTION2 == d_selectionId) {
        d_selection2.object() = value;
    }
    else {
        reset();
        new (d_selection2.buffer())
                bsl::vector<char>(value, d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION2;
    }

    return d_selection2.object();
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
bsl::vector<char>& FeatureTestMessage::makeSelection2(bsl::vector<char>&& value)
{
    if (SELECTION_ID_SELECTION2 == d_selectionId) {
        d_selection2.object() = bsl::move(value);
    }
    else {
        reset();
        new (d_selection2.buffer())
                bsl::vector<char>(bsl::move(value), d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION2;
    }

    return d_selection2.object();
}
#endif

s_baltst::Sequence2& FeatureTestMessage::makeSelection3()
{
    if (SELECTION_ID_SELECTION3 == d_selectionId) {
        bdlat_ValueTypeFunctions::reset(&d_selection3.object());
    }
    else {
        reset();
        new (d_selection3.buffer())
                s_baltst::Sequence2(d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION3;
    }

    return d_selection3.object();
}

s_baltst::Sequence2& FeatureTestMessage::makeSelection3(const s_baltst::Sequence2& value)
{
    if (SELECTION_ID_SELECTION3 == d_selectionId) {
        d_selection3.object() = value;
    }
    else {
        reset();
        new (d_selection3.buffer())
                s_baltst::Sequence2(value, d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION3;
    }

    return d_selection3.object();
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
s_baltst::Sequence2& FeatureTestMessage::makeSelection3(s_baltst::Sequence2&& value)
{
    if (SELECTION_ID_SELECTION3 == d_selectionId) {
        d_selection3.object() = bsl::move(value);
    }
    else {
        reset();
        new (d_selection3.buffer())
                s_baltst::Sequence2(bsl::move(value), d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION3;
    }

    return d_selection3.object();
}
#endif

s_baltst::Sequence3& FeatureTestMessage::makeSelection4()
{
    if (SELECTION_ID_SELECTION4 == d_selectionId) {
        bdlat_ValueTypeFunctions::reset(d_selection4);
    }
    else {
        reset();
        d_selection4 = new (*d_allocator_p)
                s_baltst::Sequence3(d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION4;
    }

    return *d_selection4;
}

s_baltst::Sequence3& FeatureTestMessage::makeSelection4(const s_baltst::Sequence3& value)
{
    if (SELECTION_ID_SELECTION4 == d_selectionId) {
        *d_selection4 = value;
    }
    else {
        reset();
        d_selection4 = new (*d_allocator_p)
                s_baltst::Sequence3(value, d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION4;
    }

    return *d_selection4;
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
s_baltst::Sequence3& FeatureTestMessage::makeSelection4(s_baltst::Sequence3&& value)
{
    if (SELECTION_ID_SELECTION4 == d_selectionId) {
        *d_selection4 = bsl::move(value);
    }
    else {
        reset();
        d_selection4 = new (*d_allocator_p)
                s_baltst::Sequence3(bsl::move(value), d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION4;
    }

    return *d_selection4;
}
#endif

bdlt::DatetimeTz& FeatureTestMessage::makeSelection5()
{
    if (SELECTION_ID_SELECTION5 == d_selectionId) {
        bdlat_ValueTypeFunctions::reset(&d_selection5.object());
    }
    else {
        reset();
        new (d_selection5.buffer())
            bdlt::DatetimeTz();
        d_selectionId = SELECTION_ID_SELECTION5;
    }

    return d_selection5.object();
}

bdlt::DatetimeTz& FeatureTestMessage::makeSelection5(const bdlt::DatetimeTz& value)
{
    if (SELECTION_ID_SELECTION5 == d_selectionId) {
        d_selection5.object() = value;
    }
    else {
        reset();
        new (d_selection5.buffer())
                bdlt::DatetimeTz(value);
        d_selectionId = SELECTION_ID_SELECTION5;
    }

    return d_selection5.object();
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
bdlt::DatetimeTz& FeatureTestMessage::makeSelection5(bdlt::DatetimeTz&& value)
{
    if (SELECTION_ID_SELECTION5 == d_selectionId) {
        d_selection5.object() = bsl::move(value);
    }
    else {
        reset();
        new (d_selection5.buffer())
                bdlt::DatetimeTz(bsl::move(value));
        d_selectionId = SELECTION_ID_SELECTION5;
    }

    return d_selection5.object();
}
#endif

s_baltst::CustomString& FeatureTestMessage::makeSelection6()
{
    if (SELECTION_ID_SELECTION6 == d_selectionId) {
        bdlat_ValueTypeFunctions::reset(&d_selection6.object());
    }
    else {
        reset();
        new (d_selection6.buffer())
                s_baltst::CustomString(d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION6;
    }

    return d_selection6.object();
}

s_baltst::CustomString& FeatureTestMessage::makeSelection6(const s_baltst::CustomString& value)
{
    if (SELECTION_ID_SELECTION6 == d_selectionId) {
        d_selection6.object() = value;
    }
    else {
        reset();
        new (d_selection6.buffer())
                s_baltst::CustomString(value, d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION6;
    }

    return d_selection6.object();
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
s_baltst::CustomString& FeatureTestMessage::makeSelection6(s_baltst::CustomString&& value)
{
    if (SELECTION_ID_SELECTION6 == d_selectionId) {
        d_selection6.object() = bsl::move(value);
    }
    else {
        reset();
        new (d_selection6.buffer())
                s_baltst::CustomString(bsl::move(value), d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION6;
    }

    return d_selection6.object();
}
#endif

s_baltst::Enumerated::Value& FeatureTestMessage::makeSelection7()
{
    if (SELECTION_ID_SELECTION7 == d_selectionId) {
        bdlat_ValueTypeFunctions::reset(&d_selection7.object());
    }
    else {
        reset();
        new (d_selection7.buffer())
                    s_baltst::Enumerated::Value(static_cast<s_baltst::Enumerated::Value>(0));
        d_selectionId = SELECTION_ID_SELECTION7;
    }

    return d_selection7.object();
}

s_baltst::Enumerated::Value& FeatureTestMessage::makeSelection7(s_baltst::Enumerated::Value value)
{
    if (SELECTION_ID_SELECTION7 == d_selectionId) {
        d_selection7.object() = value;
    }
    else {
        reset();
        new (d_selection7.buffer())
                s_baltst::Enumerated::Value(value);
        d_selectionId = SELECTION_ID_SELECTION7;
    }

    return d_selection7.object();
}

s_baltst::Choice3& FeatureTestMessage::makeSelection8()
{
    if (SELECTION_ID_SELECTION8 == d_selectionId) {
        bdlat_ValueTypeFunctions::reset(&d_selection8.object());
    }
    else {
        reset();
        new (d_selection8.buffer())
                s_baltst::Choice3(d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION8;
    }

    return d_selection8.object();
}

s_baltst::Choice3& FeatureTestMessage::makeSelection8(const s_baltst::Choice3& value)
{
    if (SELECTION_ID_SELECTION8 == d_selectionId) {
        d_selection8.object() = value;
    }
    else {
        reset();
        new (d_selection8.buffer())
                s_baltst::Choice3(value, d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION8;
    }

    return d_selection8.object();
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
s_baltst::Choice3& FeatureTestMessage::makeSelection8(s_baltst::Choice3&& value)
{
    if (SELECTION_ID_SELECTION8 == d_selectionId) {
        d_selection8.object() = bsl::move(value);
    }
    else {
        reset();
        new (d_selection8.buffer())
                s_baltst::Choice3(bsl::move(value), d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION8;
    }

    return d_selection8.object();
}
#endif

s_baltst::VoidSequence& FeatureTestMessage::makeSelection9()
{
    if (SELECTION_ID_SELECTION9 == d_selectionId) {
        bdlat_ValueTypeFunctions::reset(&d_selection9.object());
    }
    else {
        reset();
        new (d_selection9.buffer())
            s_baltst::VoidSequence();
        d_selectionId = SELECTION_ID_SELECTION9;
    }

    return d_selection9.object();
}

s_baltst::VoidSequence& FeatureTestMessage::makeSelection9(const s_baltst::VoidSequence& value)
{
    if (SELECTION_ID_SELECTION9 == d_selectionId) {
        d_selection9.object() = value;
    }
    else {
        reset();
        new (d_selection9.buffer())
                s_baltst::VoidSequence(value);
        d_selectionId = SELECTION_ID_SELECTION9;
    }

    return d_selection9.object();
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
s_baltst::VoidSequence& FeatureTestMessage::makeSelection9(s_baltst::VoidSequence&& value)
{
    if (SELECTION_ID_SELECTION9 == d_selectionId) {
        d_selection9.object() = bsl::move(value);
    }
    else {
        reset();
        new (d_selection9.buffer())
                s_baltst::VoidSequence(bsl::move(value));
        d_selectionId = SELECTION_ID_SELECTION9;
    }

    return d_selection9.object();
}
#endif

s_baltst::UnsignedSequence& FeatureTestMessage::makeSelection10()
{
    if (SELECTION_ID_SELECTION10 == d_selectionId) {
        bdlat_ValueTypeFunctions::reset(&d_selection10.object());
    }
    else {
        reset();
        new (d_selection10.buffer())
            s_baltst::UnsignedSequence();
        d_selectionId = SELECTION_ID_SELECTION10;
    }

    return d_selection10.object();
}

s_baltst::UnsignedSequence& FeatureTestMessage::makeSelection10(const s_baltst::UnsignedSequence& value)
{
    if (SELECTION_ID_SELECTION10 == d_selectionId) {
        d_selection10.object() = value;
    }
    else {
        reset();
        new (d_selection10.buffer())
                s_baltst::UnsignedSequence(value);
        d_selectionId = SELECTION_ID_SELECTION10;
    }

    return d_selection10.object();
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
s_baltst::UnsignedSequence& FeatureTestMessage::makeSelection10(s_baltst::UnsignedSequence&& value)
{
    if (SELECTION_ID_SELECTION10 == d_selectionId) {
        d_selection10.object() = bsl::move(value);
    }
    else {
        reset();
        new (d_selection10.buffer())
                s_baltst::UnsignedSequence(bsl::move(value));
        d_selectionId = SELECTION_ID_SELECTION10;
    }

    return d_selection10.object();
}
#endif

s_baltst::SequenceWithAnonymity& FeatureTestMessage::makeSelection11()
{
    if (SELECTION_ID_SELECTION11 == d_selectionId) {
        bdlat_ValueTypeFunctions::reset(&d_selection11.object());
    }
    else {
        reset();
        new (d_selection11.buffer())
                s_baltst::SequenceWithAnonymity(d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION11;
    }

    return d_selection11.object();
}

s_baltst::SequenceWithAnonymity& FeatureTestMessage::makeSelection11(const s_baltst::SequenceWithAnonymity& value)
{
    if (SELECTION_ID_SELECTION11 == d_selectionId) {
        d_selection11.object() = value;
    }
    else {
        reset();
        new (d_selection11.buffer())
                s_baltst::SequenceWithAnonymity(value, d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION11;
    }

    return d_selection11.object();
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
s_baltst::SequenceWithAnonymity& FeatureTestMessage::makeSelection11(s_baltst::SequenceWithAnonymity&& value)
{
    if (SELECTION_ID_SELECTION11 == d_selectionId) {
        d_selection11.object() = bsl::move(value);
    }
    else {
        reset();
        new (d_selection11.buffer())
                s_baltst::SequenceWithAnonymity(bsl::move(value), d_allocator_p);
        d_selectionId = SELECTION_ID_SELECTION11;
    }

    return d_selection11.object();
}
#endif

// ACCESSORS

bsl::ostream& FeatureTestMessage::print(
    bsl::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    switch (d_selectionId) {
      case SELECTION_ID_SELECTION1: {
        printer.printAttribute("selection1", d_selection1.object());
      }  break;
      case SELECTION_ID_SELECTION2: {
        bool multilineFlag = (0 <= level);
        bdlb::Print::indent(stream, level + 1, spacesPerLevel);
        stream << (multilineFlag ? "" : " ");
        stream << "selection2 = [ ";
        bdlb::Print::singleLineHexDump(
            stream, d_selection2.object().begin(), d_selection2.object().end());
        stream << " ]" << (multilineFlag ? "\n" : "");
      }  break;
      case SELECTION_ID_SELECTION3: {
        printer.printAttribute("selection3", d_selection3.object());
      }  break;
      case SELECTION_ID_SELECTION4: {
        printer.printAttribute("selection4", *d_selection4);
      }  break;
      case SELECTION_ID_SELECTION5: {
        printer.printAttribute("selection5", d_selection5.object());
      }  break;
      case SELECTION_ID_SELECTION6: {
        printer.printAttribute("selection6", d_selection6.object());
      }  break;
      case SELECTION_ID_SELECTION7: {
        printer.printAttribute("selection7", d_selection7.object());
      }  break;
      case SELECTION_ID_SELECTION8: {
        printer.printAttribute("selection8", d_selection8.object());
      }  break;
      case SELECTION_ID_SELECTION9: {
        printer.printAttribute("selection9", d_selection9.object());
      }  break;
      case SELECTION_ID_SELECTION10: {
        printer.printAttribute("selection10", d_selection10.object());
      }  break;
      case SELECTION_ID_SELECTION11: {
        printer.printAttribute("selection11", d_selection11.object());
      }  break;
      default:
        stream << "SELECTION UNDEFINED\n";
    }
    printer.end();
    return stream;
}


const char *FeatureTestMessage::selectionName() const
{
    switch (d_selectionId) {
      case SELECTION_ID_SELECTION1:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION1].name();
      case SELECTION_ID_SELECTION2:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION2].name();
      case SELECTION_ID_SELECTION3:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION3].name();
      case SELECTION_ID_SELECTION4:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION4].name();
      case SELECTION_ID_SELECTION5:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION5].name();
      case SELECTION_ID_SELECTION6:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION6].name();
      case SELECTION_ID_SELECTION7:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION7].name();
      case SELECTION_ID_SELECTION8:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION8].name();
      case SELECTION_ID_SELECTION9:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION9].name();
      case SELECTION_ID_SELECTION10:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION10].name();
      case SELECTION_ID_SELECTION11:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SELECTION11].name();
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return "(* UNDEFINED *)";
    }
}
}  // close package namespace
}  // close enterprise namespace

// GENERATED BY BLP_BAS_CODEGEN_2021.10.31
// USING bas_codegen.pl s_baltst_featuretestmessage.xsd --mode msg --includedir . --msgComponent featuretestmessage --noRecurse --noExternalization --noHashSupport --noAggregateConversion
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright 2021 Bloomberg Finance L.P. All rights reserved.
//      Property of Bloomberg Finance L.P. (BFLP)
//      This software is made available solely pursuant to the
//      terms of a BFLP license agreement which governs its use.
// ------------------------------- END-OF-FILE --------------------------------

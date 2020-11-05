//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.07.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef ISCRIPTMSG_UNKNOWN_GENERATED_H
#define ISCRIPTMSG_UNKNOWN_GENERATED_H


#include "protocol/Protocol.h"
#include "types/DateTime.h"
#include "impl/RdSignal.h"
#include "impl/RdProperty.h"
#include "impl/RdList.h"
#include "impl/RdSet.h"
#include "impl/RdMap.h"
#include "base/ISerializersOwner.h"
#include "base/IUnknownInstance.h"
#include "serialization/ISerializable.h"
#include "serialization/Polymorphic.h"
#include "serialization/NullableSerializer.h"
#include "serialization/ArraySerializer.h"
#include "serialization/InternedSerializer.h"
#include "serialization/SerializationCtx.h"
#include "serialization/Serializers.h"
#include "ext/RdExtBase.h"
#include "task/RdCall.h"
#include "task/RdEndpoint.h"
#include "task/RdSymmetricCall.h"
#include "std/to_string.h"
#include "std/hash.h"
#include "std/allocator.h"
#include "util/enum.h"
#include "util/gen_util.h"

#include <cstring>
#include <cstdint>
#include <vector>
#include <ctime>

#include "thirdparty.hpp"
#include "../instantiations.h"

#include "IScriptMsg.Generated.h"

#include "UE4TypesMarshallers.h"
#include "Runtime/Core/Public/Containers/Array.h"
#include "Runtime/Core/Public/Containers/ContainerAllocationPolicies.h"

#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
namespace Jetbrains {
    namespace EditorPlugin {
        class RIDERLINK_API IScriptMsg_Unknown : public IScriptMsg, public rd::IUnknownInstance
        {
            
            //companion
            friend class IScriptMsg;
            
            //custom serializers
            private:
            
            //constants
            public:
            
            //fields
            protected:
            rd::RdId unknownId_;
            rd::Buffer::ByteArray unknownBytes_;
            
            
            //initializer
            private:
            void initialize();
            
            //primary ctor
            public:
            IScriptMsg_Unknown(rd::RdId unknownId_, rd::Buffer::ByteArray unknownBytes_);
            
            //secondary constructor
            #ifdef __cpp_structured_bindings
                
                //deconstruct trait
            #endif
            
            //default ctors and dtors
            
            IScriptMsg_Unknown();
            
            IScriptMsg_Unknown(IScriptMsg_Unknown const &) = default;
            
            IScriptMsg_Unknown& operator=(IScriptMsg_Unknown const &) = default;
            
            IScriptMsg_Unknown(IScriptMsg_Unknown &&) = default;
            
            IScriptMsg_Unknown& operator=(IScriptMsg_Unknown &&) = default;
            
            virtual ~IScriptMsg_Unknown() = default;
            
            //reader
            static IScriptMsg_Unknown read(rd::SerializationCtx& ctx, rd::Buffer & buffer);
            
            //writer
            void write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const override;
            
            //virtual init
            
            //identify
            
            //getters
            
            //intern
            
            //equals trait
            private:
            bool equals(rd::ISerializable const& object) const override;
            
            //equality operators
            public:
            friend bool operator==(const IScriptMsg_Unknown &lhs, const IScriptMsg_Unknown &rhs);
            friend bool operator!=(const IScriptMsg_Unknown &lhs, const IScriptMsg_Unknown &rhs);
            
            //hash code trait
            size_t hashCode() const noexcept override;
            
            //type name trait
            std::string type_name() const override;
            
            //static type name trait
            static std::string static_type_name();
            
            //polymorphic to string
            private:
            std::string toString() const override;
            
            //external to string
            public:
            friend std::string to_string(const IScriptMsg_Unknown & value);
        };
    };
};

//hash code trait
namespace rd {
    template <> struct hash<Jetbrains::EditorPlugin::IScriptMsg_Unknown> {
        size_t operator()(const Jetbrains::EditorPlugin::IScriptMsg_Unknown & value) const noexcept {
            return value.hashCode();
        }
    };
}
#ifdef __cpp_structured_bindings
    
    //tuple trait
#endif

#pragma warning( pop )



#endif // ISCRIPTMSG_UNKNOWN_GENERATED_H

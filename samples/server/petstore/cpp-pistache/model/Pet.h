/**
* OpenAPI Petstore
* This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
*
* OpenAPI spec version: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Pet.h
 *
 * A pet for sale in the pet store
 */

#ifndef Pet_H_
#define Pet_H_


#include "ModelBase.h"

#include "Tag.h"
#include <string>
#include "Category.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// A pet for sale in the pet store
/// </summary>
class  Pet
    : public ModelBase
{
public:
    Pet();
    virtual ~Pet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Pet members

    /// <summary>
    /// 
    /// </summary>
    int64_t getId() const;
    void setId(int64_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    Category getCategory() const;
    void setCategory(Category value);
    bool categoryIsSet() const;
    void unsetCategory();
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string value);
        /// <summary>
    /// 
    /// </summary>
    std::vector<std::string>& getPhotoUrls();
        /// <summary>
    /// 
    /// </summary>
    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsetTags();
    /// <summary>
    /// pet status in the store
    /// </summary>
    std::string getStatus() const;
    void setStatus(std::string value);
    bool statusIsSet() const;
    void unsetStatus();

protected:
    int64_t m_Id;
    bool m_IdIsSet;
    Category m_Category;
    bool m_CategoryIsSet;
    std::string m_Name;

    std::vector<std::string> m_PhotoUrls;

    std::vector<Tag> m_Tags;
    bool m_TagsIsSet;
    std::string m_Status;
    bool m_StatusIsSet;
};

}
}
}
}

#endif /* Pet_H_ */

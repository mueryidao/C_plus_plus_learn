/*
 * =====================================================================================
 *
 *       Filename:  16.1.2_class_template.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/30/2018 03:24:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Thomas Li (Thomas), thomas.li@alcatel-lucnet.com
 *   Organization:  
 *
 * =====================================================================================
 */

class StrBlob {
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::tring> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const std::string &t) { data->push_back(t); }
    void pop_back();
    std::string& front();
    std::string& back();

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

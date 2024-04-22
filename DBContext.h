#ifndef DBCONTEXT_H
#define DBCONTEXT_H
#include "Header.h"

class DBContext
{
public:
    static json readData(const std::string& filename)
    {
        std::ifstream file(filename);
        json data;
        if (file.is_open())
        {
            file >> data;
            file.close();
        }
        return data;
    }

    static void updateData(const std::string& filename, const json& newData)
    {
        std::ofstream file(filename);
        if (file.is_open())
        {
            file << newData.dump(4, ' ', true);
            file.close();
        }
    }

    static void addData(const std::string& filename, const json& newData)
    {
        std::ifstream i_file(filename);
        json data;
        if (i_file.is_open())
        {
            i_file >> data;
            i_file.close();
        }

        data.push_back(newData);

        std::ofstream o_file(filename);
        if (o_file.is_open())
        {
            o_file << newData.dump(4, ' ', true);
            o_file.close();
        }
    }
};
#endif

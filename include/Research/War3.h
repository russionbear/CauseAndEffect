#include <map>
#include <set>
#include <vector>
#include "Structure/Structure.h"


/**
 * @brief 
 * wind cloud rain snow sun water temperature
 * slope: plain hills mountain
 * cover: sand sea glass water *_tree
 * resource: oil tree animal food
 * @brief 
 * limit number of city block, type of resource
 */
class Geography{

}


//------------------------------------------------------------------------
/**
 * @brief 
 * how to production
 */
class SubStance{
public:
    std::map<int, int> needs;
}

class SubStanceMng{
public:
    static SubStanceMng& GetInstance()
    {
        static SubStanceMng instance;
        return *instance;
    }
}

typedef SubStanceType int;


class Satta{
public:

}

/**
 * @brief 
 * people 
 * politics/power
 * force
 * header
 * scientist
 */
class Group{
public:
    int type;
    int belong;
    std::vector<Satta> *story_memeber;
    std::vector<*Group> *branch;
    int number;

    double culture;
    int story_feather;
}

//----------------------------------------------------------------------
/**
 * @brief 
 * nature
 * living
 * product
 * one block's group always has the same belong(power group)
 */
class CityBlock{
public:
    // std::map<int, int> register_group;
    // std::set<int> group_struct;
    // std::map<int, int> struct_crotch;
    std::vector<Group> register_group;
    // int nu_block;
    const const int type;
    std::map<SubStanceType, int> storage;

    std::map<SubStanceType, int> production;
    std::map<SubStanceType, double> product_progress;

    std::map<SubStanceType, int> group_daily_cost;

    int story_feather;

    CityBlock(int type);
    CityBlock(const CityBlock& cb, int type);
}

/**
 * @brief storage, build
 * 
 */
typedef CityBlockType int;


class City
{
private:
    /* data */
public:
    int area;
    Geography *geo;
    // Resource *res;
    std::map<CityBlockType, std::vector<CityBlock>> block;

    //layer_throuth
};


class CityMng{
public:
    static CityMng& GetInstance()
    {
        static CityMng instance;
        return *instance;
    }
    std::vector<City> data;
    Matrix *map;
    BaseDataTime time;

    std::vector<Action> actions;
    void update();
}


//----------------------------------------------------------------------------
/**
 * @brief 
 * decision: power satta 
 * group build destory hire product_what convert
 * people: move
 */
class Action{

}

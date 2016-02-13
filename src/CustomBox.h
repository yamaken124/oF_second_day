//
//  CustomBox.h
//  second_day
//
//  Created by Yamamoto Kenta on 2016/02/13.
//
//

#ifndef __second_day__CustomBox__
#define __second_day__CustomBox__

#include "ofMain.h"
class CustomBox{
    // 他のファイルからアクセスできる。ofAppとかから。
public:
    void init(); // 初期化
    void update(); // 数値更新
    void draw(); // 描画
    
private:
    ofColor mcolor;
    ofBoxPrimitive mbox;
    ofVec3f box_position;
    ofVec3f box_speed;
};

#endif /* defined(__second_day__CustomBox__) */

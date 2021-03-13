#include"libOne.h"
void gmain(){
    window(1000, 1000);
    //赤い点の位置
    float rx = 5;
    //青い点の位置
    float bx = 9;
    while (notQuit){
        //赤い点をマウスで移動
        rx = mathMouseX;
        //１次元ベクトル(終点-始点）
        float vx = rx - bx;
        //ベクトルの大きさ
        float mag = vx < 0 ? -vx : vx;
        //ベクトルの正規化
        float nvx = vx / mag;
        //青い点を赤い点に近づける
        float speed = 0.01f;
        bx += mag>=speed? nvx * speed : 0.0f;
        //クリアして座標を描画
        clear(200);
        mathAxis(9.1f);
        //ベクトルを描画
        strokeWeight(10);
        stroke(0);
        mathArrow(0, 0, vx, 0);
        //正規化ベクトルを描画
        stroke(255, 0, 0);
        mathArrow(0, 0, nvx, 0);
        //赤い点の描画
        strokeWeight(20);
        stroke(255, 0, 0);
        mathPoint(rx, 0);
        //青い点の描画
        stroke(0, 0, 255);
        mathPoint(bx, 0);
        //テキスト情報描画
        textSize(50);
        text((let)"vec(" + vx + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);
        text((let)"nvec(" + nvx + ")", 0, 150);
    }
}

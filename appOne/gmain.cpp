#include"libOne.h"
void gmain(){
    window(1000, 1000);
    //�Ԃ��_�̈ʒu
    float rx = 5;
    //���_�̈ʒu
    float bx = 9;
    while (notQuit){
        //�Ԃ��_���}�E�X�ňړ�
        rx = mathMouseX;
        //�P�����x�N�g��(�I�_-�n�_�j
        float vx = rx - bx;
        //�x�N�g���̑傫��
        float mag = vx < 0 ? -vx : vx;
        //�x�N�g���̐��K��
        float nvx = vx / mag;
        //���_��Ԃ��_�ɋ߂Â���
        float speed = 0.01f;
        bx += mag>=speed? nvx * speed : 0.0f;
        //�N���A���č��W��`��
        clear(200);
        mathAxis(9.1f);
        //�x�N�g����`��
        strokeWeight(10);
        stroke(0);
        mathArrow(0, 0, vx, 0);
        //���K���x�N�g����`��
        stroke(255, 0, 0);
        mathArrow(0, 0, nvx, 0);
        //�Ԃ��_�̕`��
        strokeWeight(20);
        stroke(255, 0, 0);
        mathPoint(rx, 0);
        //���_�̕`��
        stroke(0, 0, 255);
        mathPoint(bx, 0);
        //�e�L�X�g���`��
        textSize(50);
        text((let)"vec(" + vx + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);
        text((let)"nvec(" + nvx + ")", 0, 150);
    }
}

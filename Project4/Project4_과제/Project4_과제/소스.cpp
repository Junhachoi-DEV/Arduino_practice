// C++ code
//
/*
const int en = 9;
const int mc_1 = 3;
const int mc_2 = 2;
const int pot = 0;

int val = 0;
int velocity = 0;

void setup()
{
    pinMode(en, OUTPUT);
    pinMode(mc_1, OUTPUT);
    pinMode(mc_2, OUTPUT);
    new_break();  		//���͸� ������ ���·� �ʱ�ȭ
}

void loop()
{
    val = analogRead(pot);

    if (val > 562) 		//������ ȸ��
    {
        velocity = map(val, 563, 1023, 0, 255);
        forward(velocity);
    }
    else if (val < 462)	//������
    {
        velocity = map(val, 461, 0, 0, 255);
        reverse(velocity);
    }
    else
    {
        new_break(); 		//����
    }
}

void forward(int rate) //������ �Լ�
{
    digitalWrite(en, LOW);
    digitalWrite(mc_1, HIGH);
    digitalWrite(mc_2, LOW);
    analogWrite(en, rate);
}

void reverse(int rate)	//������ �Լ�
{
    digitalWrite(en, LOW);
    digitalWrite(mc_1, LOW);
    digitalWrite(mc_2, HIGH);
    analogWrite(en, rate);
}

void new_break()		//���� �Լ�
{
    digitalWrite(en, LOW);
    digitalWrite(mc_1, LOW);
    digitalWrite(mc_2, LOW);
    digitalWrite(en, HIGH);
}
*/
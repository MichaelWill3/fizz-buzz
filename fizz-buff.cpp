class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::string possibleAnswers[] = {"FizzBuzz","Fizz","Buzz"};
        std::vector<std::string> answer;
        for(int i = 1; i <= n; i++)
        {
            uint16_t div3 = i%3;
            uint16_t div5 = i%5;
            if(!div5 && !div3)
            {
                answer.push_back(possibleAnswers[0]);
            }
            else
            {
                if(!div3)
                {
                    answer.push_back(possibleAnswers[1]);
                }
                else{
                    if(!div5)
                    {
                        answer.push_back(possibleAnswers[2]);
                    }
                    else
                    {
                        answer.push_back(std::to_string(i));
                    }
                }
            }
        }
        return answer;
    }
};

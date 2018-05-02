#include <stdio.h>
#include <ctype.h>
// http://www.englishtag.com/tests/level_test.asp  *real test* 
int correctas, incorrectas;
	incorrectas = 0;
	correctas = 0;
	
int main(){
    pregunta("1. How old are you?", "A. I have 27 years old", "B. I have 27 years", "C. I am fine", "D. I am 27 years old", 'D');
	pregunta("2. He went to the Stadium .....", "A. with taxi", "B. by taxi", "C. on taxi", "D. in taxi", 'B');
    pregunta("3. How long have you been living in London?", "A. for 7 years", "B. at least 7 years", "C. since 7 years", "D. 7 years ago", 'A');
    pregunta("4. We haven't got ..... money.", "A. a lot", "B. some", "C. any","D. many", 'C');
    pregunta("5. Choose the correct sentence.", "A. He like going to the movies", "B. He likes going to the movies", "C. He liked go to the movies"," D. He like the movies", 'B');
    pregunta("6. Peter ..... fly to San Francisco tomorrow.", "A. to going", "B. goes to", "C. is going to","D. go to", 'C');
    pregunta("7. He plays soccer .....", "A. on Wednesdays", "B. in Wednesdays", "C. at Wednesdays","D. by Wednesdays", 'A');
    pregunta("8. .... some more coffee?", "A. Do you?", "B. Do you like?", "C. You'd like","D. Would you like?", 'D');
    pregunta("9. I wanted a green shirt but they only had .....", "A. a one white", "B. one white", "C. a white","D. a white one", 'D');
    pregunta("10. He ..... never been to America.", "A. does", "B. has", "C. haven't","D. hadn't", 'B');
    pregunta("11. Choose the correct sentence.", "A. Richard usually arrives late", "B. Richard late arrives usually","C. Richard late usually arrives","D. Richard usually late arrives", 'A');
    pregunta("12. The house was empty. There ..... there.", "A. wasn't nobody", "B. was anybody", "C. was somebody","D. was nobody", 'D');
    pregunta("13. If I were rich, I ..... buy a house on the beach.", "A. will", "B. would", "C. should","D. wish", 'B');
    pregunta("14. When she arrived, he .....", "A. already left", "B. has already left", "C. had already left","D. left", 'C');
    pregunta("15. I forgot ..... the lights before I left.", "A. to turn off", "B. put off", "C. turning off","D. shot", 'A');
    pregunta("16. By the time you finish the class I .....", "A. will have left", "B. leave", "C. going to leave","D. would left", 'A');
    pregunta("17. The room can't be dirty she .....", "A. is just clean it.", "B. have just cleaned it.", "C. just clean it.","D. has just cleaned it.", 'D');
    pregunta("18. He plays soccer, ..... ?", "A. don't he?", "B. does he?", "C. just clean it.","D. doesn't he?", 'D');
    pregunta("19. If only I ..... to the party instead of staying at home.", "A. went", "B. had gone", "C. did go","D. have gone", 'B');
    pregunta("20. Has Mrs. Smith arrived ..... ?", "A. yet", "B. still", "C. now","D. already", 'A');
	pregunta("21. Wendy is ..... Paul to get up now.", "A. telling", "B. saying", "C. saying to","D. telling to", 'A');
    pregunta("22. Have you sent that letter to Mr. Taylor? \n Yes, I've ..... done that.", "A. still", "B. yet", "C. already", "D. now", 'C');
    pregunta("23. It's no use ..... to him. He doesn't listen.", "A. speaking", "B. to speak", "C. spoke", "D. have spoken", 'A');
    pregunta("24. This is the girl ..... I met on Thursday.", "A. whom", "B. which", "C. what","D. -----", 'D');
	pregunta("25. ..... is your house from here?", "A. How much", "B. How long", "C. How far","D. How many", 'C');
    pregunta("26. You can watch TV ..... you like.", "A. whenever", "B. soon", "C. always", "D. whatever", 'A');
    pregunta("27. This house is quite old. It ..... in 1910.", "A. built", "B. in Wednesdays", "C. at Wednesdays","D. by Wednesdays", 'B');
    pregunta("28. She ..... go to school yesterday.", "A. must", "B. had to", "C. ought to","D. should have", 'B');
    pregunta("29. That's the ..... of my worries, it'll never happen.", "A. fewer", "B. less", "C. last","D. least", 'D');
    pregunta("30. Don't ..... me. I'll be back late.", "A. hope for", "B. waiting for", "C. expect","D. wait for", 'D');
    pregunta("31. The lady ..... in the corner is my aunt.", "A. whose", "B. is sitting","C. sits","D. sitting", 'D');
    pregunta("32. Choose the correct sentence", "A. He used to play chess very often", "B. He uses play chess very often", "C. He was played chess very often","D. He didn't playing chess very often", 'A'); //revisada
    pregunta("33. He doesn't like ..... what to do.", "A. told", "B. said", "C. having said","D. being told", 'D');
    pregunta("34. I ..... it doesn't rain tomorrow, I'm going for a picnic.", "A. wait", "B. expect", "C. hope","D. wish", 'C');
    pregunta("35. I thought you .....", "A. will come to the party", "B. were coming to the party", "C. come to the party","D. have come to the party", 'B');
    pregunta("36. He remembers being ..... to the fair as a child.", "A. visited", "B. brought", "C. taken","D. shown", 'C');
    pregunta("37. Finishing a course is always .....", "A. satisfying", "B. satisfaction", "C. satisfies","D. satisfied", 'A');
    pregunta("38. She worked hard yesterday and ..... finish everything.?", "A. can", "B. was able to", "C. is hard","D. let", 'B');
    pregunta("39. Choose the correct sentence.", "A. Ask her when will be ready the food", "B. Ask her when the food will be ready", "C. Ask her when will the food ready be","D. Ask her when will be the food ready", 'B');
    pregunta("40. Choose the correct sentence.", "A. That's a little beige British proud bulldog", "B. That's a proud beige little British bulldog", "C. That's a little proud beige British bulldog","D. That's a proud little beige British bulldog", 'D');
    pregunta("42. Peter can eat ..... as twenty oranges in one sitting.", "A. have", "B. had", "C. would have", "D. had had", 'B');
    pregunta("42. He went to the Stadium .....", "A. so many", "B. so much", "C. as many", "D. as much", 'C');
    pregunta("43. I know he didn't thank you, but he .... have done so.", "A. should", "B. may", "C. must", "D. would", 'A');
    pregunta("44. I won't go to the cinema ..... you come with me.", "A. except", "B. otherwise", "C. unless","D. therefore", 'C');
    pregunta("45. He wrote the letter ..... , he didn't need anybody's help.", "A. on his own", "B. by his own", "C. on himself","D. by his ownership", 'A'); 
    pregunta("46. Hotel rooms must be ..... by noon.", "A. vacated", "B. evacuated", "C. abandoned","D. leave", 'A'); 
    pregunta("47. You can take the book with you ..... you give it back.", "A. as well as", "B. shall we?", "C. let us?","D. don't we?", 'D');
    pregunta("48. .... some more coffee?", "A. Do you?", "B. Do you like?", "C. You'd like","D. Would you like?", 'B');
    pregunta("49. I need to finish this ..... Friday.", "A. during", "B. by", "C. until","D. at", 'B'); 
    pregunta("50. After many years of research, they found the solution .....", "A. at the end", "B. at last", "C. by the end","D. on the end", 'B');
    system("cls");
	if (correctas < 15){
		printf("Tu nivel de ingles es bajo");
	}
	else if(correctas <= 25 ){
		printf("tu nivel de ingles es mediano");
	}
	else if(correctas <= 40 ){
		printf("tu nivel de ingles es mediano alto");
	}
	else{
		printf("tu nivel de ingles es alto");
	}
    system("cls");
	printf("\n correctas: %i \n incorrectas: %i", correctas, incorrectas);
	return 0;
}
void pregunta(q, s1, s2, s3, s4, answ){
	char respuesta;
	system("cls");
	system("pause");
	printf("%s \n", q);
	printf("%s \n", s1);
	printf("%s \n", s2);
	printf("%s \n", s3);
	printf("%s \n", s4);
	printf("tu respuesta: ");
	scanf("%c", &respuesta);
	if (toupper(respuesta)==answ){
		correctas = correctas + 1;
	}
	else{
		incorrectas = incorrectas +1;
	}
}

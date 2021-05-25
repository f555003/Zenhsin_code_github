'''
Descripttion: This is a simple demo to show how to design a game of love
version: 1.0
Author: Mu-Hsin,Wu
Date: 2021-05-21 17:08:57
LastEditors: Please set LastEditors
LastEditTime: 2021-05-21 22:04:53
'''
#跑馬燈應用
import time
#開始畫面
print('-'*20,'關於一個女孩與肥宅的故事','-'*20)
print('-'*66)

#人物血量
bos_lov = 0



name_flag = True

while name_flag :
  print('請輸入以下名稱並按下 Enter 鍵:',end='\n') 
  user_name = input('請輸入玩家名稱: ')
  boss_name = input('請輸入肥宅名稱: ')
  corr_name = input('請問輸入正確嗎?[y/n] ')
  print('-'*66)
  if corr_name in ['y','Y','yes','Yes','yEs','yeS','YEs','YeS','yES','YES']:
    print('\t開始遊戲')
    break
  elif corr_name in ['n','N','no','No','nO','NO']:
    print('\t請重新輸入: ')
  else :
    print('\t資料錯誤，請重新入: ')

#遊戲介紹
  #用 delay 來 print 故事情節
story1 = f'這是一個關於 {boss_name} 遇到 {user_name} 的故事'
story2 = f'玩家將扮演著我們的主人公 {user_name} 來攻略 {boss_name}'
  # print story1
for story in story1:
  print(story,end='')
  # print 開啟換行(Warp)
print(end='\n')
  # print story2
for story in story2:
  print(story,end='')
print(end='\n')
time.sleep(5)


#遊戲內容分為 1.主動告白 和 2.和肥宅培養感情 3.跟其他異性聊天 4.逃跑
game_options = ['\t1.主動告白',f'\t2.和{boss_name}培養感情','\t3.跟其他異性聊天','\t4.逃跑']

game_flag = True

#內容對話
#boss_name 要說話時要添加 input
  #和肥宅培養感情 好感度 1 CG1 對話
game_cg00 = [f'透過訊息聊了一段時間，但你三不五時的告白還是會讓 {boss_name} 害羞一下',\
        f'雖然 {boss_name} 會傳臉紅紅的貼圖要你別鬧，但還是不表態，手機另一端你有點失望甚至有點想哭鼻子',\
        f'幾分鐘後你沒有訊息，{boss_name} 傳來一段訊息.']
game_cg01 = f'{boss_name}: 是....在忙嗎?'

  #和肥宅培養感情 好感度 2 CG2 對話
game_cg20 = [f'你跟 {boss_name} 聊了一段時間，你們嘗試開始講電話',\
        f'你們聊的過程你會偷偷撩 {boss_name} ，讓 {boss_name} 的心 撲通撲通，不過他還是免強鎮定自己',\
        '你們就繼續新的話題，至於剛剛告白的事情，你們似乎當作沒發生繼續聊天下去，',\
        '在你們一如往常準備要掛電話時...']
game_cg21 = f'{boss_name}: 要不...下次我去...找你，一起...吃個飯如何?'

  #和肥宅培養感情 好感度 3 CG3 對話
game_cg30 = [ f'那天下著雨，你還在上班耳機傳來 {boss_name} 說著在哪邊玩、拍風景照給你看',\
          '你們也是邊閒聊邊忙，等待著晚上第一次見面吃飯時間',\
          f'你帶 {boss_name} 去當地有名的丹丹聊著一些趣事',\
          f'飯後你們還一起散步，順便吃第二噸晚餐(?!',\
          f'結束第一次見面各自到家後，{boss_name} 突然打過來(小聲地說)']
game_cg31 = f'{boss_name}:下次...見面，我...我...我再跟你說...說答案'

  #和肥宅培養感情 好感度 4 CG4 對話
game_cg40 = [f'今天你們先約在餐廳吃飯，你卻因意外狀況遲到，讓 {boss_name} 有點尷尬但吃飯過程還算是融洽',\
        '在電影開演前，你們先去其他地方逛逛看了一些有趣小物，還有求姻緣的小籤詩',\
        '籤詩上面的解釋，卻道盡了一堆未解之謎，使你們更加迷惑',\
        '雖有迷惑，也讓你們有更多的聊天話題，也因這話題順道逛了一堆地方',\
        '因逛得忘我，導致差點趕不上電影，看電影時你突然看到爆米花只有你在吃',\
        f'而 {boss_name} 卻專心看電影根本甚麼都沒動',\
        f'你抓起手中的爆米花叫著 {boss_name} 張嘴，',\
        f'{boss_name} 被你突如其來的舉動有點訝異，但還是乖乖張嘴吃著你餵的食物...',\
        f'電影結束後，你看著 {boss_name} 拿起手機談著公事卻沒有回答你的回覆，',\
        '心裡想著是不是今天哪邊做錯了? 是遲到嗎? 還是聊天過程踩到他的地雷?',\
        '甚至是突然太親密舉動嚇到他了?',\
        '兩個人，一個人講著電話、另一個人面無表情一同走到電影院門口',\
        '你以為今天到這準備結束，要離開準備找朋友哭訴時...']
game_cg41 = [f'{boss_name} 雖講著電話，卻點了點你的肩膀，跟你要了手機並打開備忘錄',\
        f'你當下很矇看著 {boss_name} 在你的備忘錄打著 [ 你想知道答案嗎? ]',\
        '你看到訊息時在想 [ 這個人到底在幹嘛啦 很煩ㄟ ]，但還是點了頭',\
        f'他看了你點了頭 並且要你伸出手來， {boss_name} 一邊說著公事一邊跟你手牽著手似無目的的走著',\
        f'走路的過程，你總是偷偷地望著 {boss_name}，而他卻是認真說著公事',\
        f'你感覺 {boss_name} 牽手好像很輕鬆，一副很自然的樣子，根本不向肥宅樣',\
        f'這樣的疑問持續到他講完電話， {boss_name} 放下電話後，第一句話是...',\
        '[ 知道我的回覆了嗎? ]']
  #和肥宅培養感情 好感度 > 4 CG5 對話
game_cg50 = '夥伴，決勝局了啦(๑•̀ㅂ•́)و✧'

#遊戲結局
  ## 選項1 主動告白 好感度 0 直接進入選項 0 結局
game_end1_0 = f'突如其然的告白讓 {boss_name} 不知所措並立即跑走，讓你一個人在那邊不知所措'
  ## 選項1 主動告白 好感度 1 直接進入選項 1 結局
game_end1_1 = f'{boss_name}: 齁呦~ 別鬧了啦 (´///☁///`) ，{boss_name} 害羞地跑掉了'
  ## 選項1 主動告白 好感度 2 直接進入選項 2 結局
game_end1_2 = f'{boss_name}: 齁齁~ 很會ㄟ ⁄(⁄ ⁄•⁄ω⁄•⁄ ⁄)⁄ '
  ## 選項1 主動告白 好感度 3 直接進入選項 3 結局
game_end1_3 = f'{boss_name}: 好，我會認真考慮的 (◍•ᴗ•◍)ゝ '
  ## 選項1 主動告白 好感度 4 直接進入選項 4 終結局
game_end1_4 = [ '其實，剛剛本要跟你告白的說，只是沒甚麼機會',\
        '要告白前 我還網路上查過要怎麼告白的方法',\
        '發現最佳的告白好像是手牽起來就好',\
        '不過我太緊張了，會留手汗，只能透過這樣窩囔的方式牽起你的手',\
        '接下來的話，希望你可以聽說說...']

game_end1_41 =['謝謝你願意陪著我，這麼好的你願意喜歡我',\
        '願意陪我聊天，一起溝通事情，聽我說話',\
        '儘管我很 [ 悶騷 ]，你還是願意喜歡我',\
        '遇到事情雖有爭執，你更願意一起瞭解怎麼樣可以讓兩個人更好,',\
        '好到我都懷疑是不是我上輩子拯救了地球才能遇到這樣好的你',\
        '還有你的善良、體貼、溫柔、還有小淘氣...等，',\
        '都讓我為你為之瘋狂',\
        '最後我想說.....',\
        '人生 很痛苦，找一個願意陪你一起痛苦的隊友是很幸福的事情',\
        f'{user_name} .... 你願意當我的隊友嗎 (灬ºωº灬) ?']
  ## 這邊 mp3 之後 迎接 Happy End

  ## 選項 3 跟其他異性聊天 結局
game_end3 = [f'有一天 {boss_name} 看到你們有說有笑的，',\
        '心裡既難過又憤怒，憤憤不平地逃離現場',\
        '據說他目前在網路上很有名，',\
        '不是兩性專家，而是挑起男女對立的災難大師',\
        '哭阿 災難大師']
  ## 選項 4 結局(5)
game_end4 = [f'{boss_name} 看了你著你逃跑的背影，轉過身心灰意冷的走回家...',\
        f'不久後你再聽到 {boss_name} 的消息是在電視上了，',\
        f'{boss_name} 發明機械伴侶意外地幫助了很多跟他一樣遭遇的人，',\
        '由於機械伴侶大受好評，導致全世界無人生育，',\
        '最後...世界滅亡了 可憐啊']

######################
####   遊戲主程式   ####
######################
while game_flag :
  print('-'*66)
  print(f'{boss_name}  目前好感度: ',bos_lov)
  for options in game_options :
    print((options),end='\n')
  game_select = input('請輸入選項: ')
  print('-'*66,end='\n')

  #進入遊戲選項
  #主動告白
  if game_select == '1' :

    #好感度 1 結局
    if bos_lov in [ 1,2 ] :
      print(game_end1_1,end='\n')
      print(f'官方OS: 很會ㄟ你還讓 {boss_name} 臉紅',end='\n')
      print(end='\n')
      input('請按下 Enter 鍵，繼續遊戲')

    #好感度 2 結局
    elif bos_lov == 3 :
      print(game_end1_2,end='\n')
      print('官方OS: 攻略那個大木頭',end='\n')
      print(end='\n')
      input('請按下 Enter 鍵，繼續遊戲')
    #好感度 3 結局
    elif bos_lov == 4 :
      print(game_end1_3,end='\n')
      print(f'官方OS: 差一點點了，攻下 {boss_name} 吧',end='\n')
      print(end='\n')
      input('請按下 Enter 鍵，繼續遊戲')
    #好感度 4 終章
    elif bos_lov > 4 :
      for game_endloop1_4 in game_end1_4 :
        print(game_endloop1_4,end='\n')
        time.sleep(3)
      print(end='\n')
      final_key = input('請輸入 yes ，繼續遊戲; 或是按任意鍵取消最後結局-->  ')
      #最終結局

      if final_key in ['y','Y','yes','Yes','yEs','yeS','YEs','YeS','yES','YES']:
        print(end='\n')
        for game_endloop1_41 in game_end1_41 :
          print(game_endloop1_41,end='\n')
          time.sleep(3)
        game_flag = False
        game_flag2 = True
      else :
        print(end='\n')
        print('官方OS: 有情亦是無情，無情莫問前程，有情無須回首，燕別東南，不挽留。')
        game_flag = False
        game_flag2 = False

    #好感度 0 結局  
    else :
      for game_endloop1_0 in game_end1_0 :
        print(game_endloop1_0,end='')
      print(end='\n')
      print('官方OS: 開場來這招 母湯歐 真D菜ㄟ你 笑死',end='\n')
      print(end='\n')
      input('請按下 Enter 鍵')
      game_flag = False
      game_flag2 = False

  #和肥宅聊天
  elif game_select == '2':
    #好感度到達 1
    if bos_lov == 1 :
        for game_cgloop00 in game_cg00 :
          print(game_cgloop00,end='\n')
          time.sleep(3)
        print(end='\n')
        input('請按 Enter 鍵...')
        print(end='\n')
        for game_cgloop01 in game_cg01 :
          print(game_cgloop01,end='')
        print(end='\n')
        print(f'官方OS: 真的被 {boss_name} 氣死',end='\n')
        print(end='\n')
        input('請按 Enter 鍵，繼續觀看後續')
    
    #好感度達 2
    elif bos_lov == 2 :
      for game_cgloop20 in game_cg20 :
          print(game_cgloop20,end='\n')
          time.sleep(3)
      print(end='\n')
      input('請按 Enter 鍵...')
      print(end='\n')
      for game_cgloop21 in game_cg21 :
        print(game_cgloop21,end='')
      print(end='\n')
      input('請按 Enter 鍵，繼續觀看後續')
    
    #好感度達 3
    elif bos_lov == 3 :
      for game_cgloop30 in game_cg30 :
          print(game_cgloop30,end='\n')
          time.sleep(3)
      print(end='\n')
      input('請按 Enter 鍵...')
      print(end='\n')
      for game_cgloop31 in game_cg31 :
        print(game_cgloop31,end='')
      print(end='\n')
      input('請按 Enter 鍵，繼續觀看後續')
    
    #好感度達 4
    elif bos_lov == 4 :
      for game_cgloop40 in game_cg40 :
          print(game_cgloop40,end='\n')
          time.sleep(5)
      print(end='\n')
      input('請按 Enter 鍵...')
      print(end='\n')
      for game_cgloop41 in game_cg41 :
        print(game_cgloop41,end='\n')
        time.sleep(5)
      print(end='\n')
      input('請按 Enter 鍵，繼續觀看後續')
    
    #好感度大於 4  
    elif bos_lov > 4 :
      print(game_cg50,end='\n')
      print(end='\n')
      input('請按 Enter 鍵，繼續觀看後續')
    else :
      print('你們有愉快的聊天過程,好感度上升',end='\n')
      print('官方OS: 懂聊天ㄟ')
    bos_lov += 1
    print(end='\n')
    
  
  #跟其他異性聊天
  elif game_select == '3':
    for end3 in game_end3 :
      print(end3, end='\n')
      time.sleep(3)
    game_flag = False
    game_flag2 = False
  
  #逃跑結局
  elif game_select == '4' :
    for end4 in game_end4 :
      print(end4,end='\n')
      time.sleep(3)
    game_flag = False
    game_flag2 = False
  #輸入錯誤重新選擇
  else :
    print('無此選項，請重新選擇:')

#遊戲結束
print('-'*66)

if game_flag2 == True :
  print(f' 恭喜成功攻略 {boss_name} ',end='\n')
  print(' 遊戲結束 ',end='\n')
else :
  print(' 或許這也是一種結局吧? ',end='\n')
  print(' 遊戲結束 ',end='\n')

print('-'*66)

input('請按下 Enter 離開遊戲')
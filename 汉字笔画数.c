#include <stdio.h>
#include <string.h>
int getstrokes (void);  //´«µÝÐÕÃû×Ö·ûÊý×é,·µ»Ø×Ü±Ê»­Êý 
int main (void)
{
	int strokes;
	printf ("ÇëÊäÈëÐÕÃû:");
 	getstrokes ();
	return 0;
}

int getstrokes (void)
{
	char name[20];
	int mark=0,big=0,istrokes=0,test=0,chars=0;  //markÎªÊý¾Ý¿âÊý×é±ê¼Ç testÎªºº×ÖÊý×é±ê¼Ç bigÎªºº×Ö×Ö·ûÊý strokesÎª±Ê»­¼ÇÊý chars¿ØÖÆÑ­»· 
	char strokes0="";
	char strokes1[]="Ò»ÒÒ";
	char strokes2[]="¶¡ÆßÄËØ¿¾ÅÁË¶þÈËØé¶ùÈë°ËØç¼¸ÛÉµ¶µóÁ¦ÙèØ°Ê®³§ÛÌÓÖ";
	char strokes3[]="¹ãÜ³²Å‰÷²æåøáÜØ¡çÝ´¨åÁ´ç´ó·²„G„F·É¸É¸öÞÃ¹¤¹­‘’¼°Ÿ¼º…mæÝ½í¾ÃXæÞŒH¿ÚŽw¿÷Âí}Ã´ÃÅå²Íò…`Å®ãÜØ¢ÆòÇ§áëÈÐ„UÈýÉ½áêÉÏÉ×â»Ê¿Ê¬ÞÐãßËÈæù‰åÍÁØ±Íè“ƒÇÍöÞÌàíÎÀþ@Ø£Ï°Ï¦ÏÂÏçÐ¡âàåæ…_„²Ñ¾çÛÒ²ß®ÒÚÒÑÒåÓÚ€ÓëÕÉâºÖ®×Ó";
	char strokes4[]="²»ÓëØ¤³ó×¨ÖÐ·áµ¤ÎªÖ®ÎÚÊéÓèÔÆ»¥ØÁÎå¾®¿ºÊ²ÈÊØìØêØÆ½öÆÍ³ðØë½ñ½éÈÔ´ÓÂØ²ÖÔÊÔª¹«ÁùÙâÄÚ¸ÔÈß·ïÐ×·ÖÇÐØ×È°°ì¹´ÎðÔÈ»¯Æ¥ÇøØ¦ÉýÎç±å¶òÌüÀú¼°ÓÑË«·´ÈÉÌìÌ«·òØ²¿×ÉÙÓÈÒü³ßÍÍ°Í±Ò»ÃØ¥¿ªÒýÐÄÒä¸ê»§ÊÖÔúÖ§ê·ë¶ÎÄ¶·½ï·½ÎÞÈÕÔ»ÔÂÄ¾Ç·Ö¹´õì¯Îã±ÈÃ«ÊÏÆøË®»ð×¦¸¸Ø³ãÝÆ¬ÑÀÅ£È®ÍõÍßí±ÒÕ¼û¼Æ¶©¸¼ÈÏ¼¥±´³µµË³¤ãÅ¶ÓÎ¤·ç·¦";
	char strokes5[]="ÇÒØ§ÊÀÇð±ûÒµ´Ô¶«Ë¿Ö÷Õ§ºõÀÖ×ÐÊËËûÕÌ¸¶ÏÉÙÚØðÇªØî´úÁîÒÔØíÒÇØïÃÇÐÖÀ¼È½²áÐ´¶¬·ëÍ¹°¼³ö»÷¿¯Û»¹¦¼ÓÎñÛ½°ü´Ò±±ÔÑ»Ü°ëß²Õ¼¿¨Â¬Ø´Ã®À÷È¥·¢¹Å¾äÁíß¶ßµÖ»½ÐÕÙ°È¶£¿ÉÌ¨ß³Ê·ÓÒØÏÒ¶ºÅË¾Ì¾ß·µðß´ÇôËÄÊ¥´¦ÍâÑëº»Ê§Í·Å«ÄÌÔÐÄþËüå³¶Ô¶ûæØåêÄá×óÇÉ¾ÞÊÐ²¼Ë§Æ½Ó×âÏÛÍ¸¥ºë¹é±ØâáÎìê§ÆË°Ç´òÈÓ³âµ©¾ÉÎ´Ä©±¾ÔýÊõÕýÄ¸ØµÃñë­ÓÀÍ¡Ö­»ãººÃð·¸áìÐþÓñ¹Ï¸ÊÉúÓÃË¦ÌïÓÉ¼×Éêµçñâ°×Æ¤ÃóÄ¿Ã¬Ê¸Ê¯Ê¾ÀñºÌÑ¨Á¢¾ÀÜ´°¬Üµ½ÚÚ¦Ú§ÌÖÈÃÚ¨ÆýÑµÒéÑ¶¼ÇÔþ±ßÁÉÚõÚøÚöÚ÷îÄÉÁÚäÚã¼¢Ô¦ÄñÁú";
	char strokes6[]="Ø©¶ªÆ¹ÅÒÇÇØÀÂòÕùØ¨ÑÇ½»º¥Òà²úÑöÖÙØòØõ¼þ¼ÛÈÎ·Ý·ÂÆóØøÒÁÎé¼¿·ü·¥ÐÝÖÚÓÅ»ï»áØñÉ¡Î°´«ØóÉËØöÂ×Ø÷Î±ØùØô³äÕ×ÏÈ¹âÈ«¹²¹ØÐËÔÙ¾üÅ©±ùÙü³å¾öÙìÛÊØØÐÌ»®ë¾ÁÐÁõÔò¸Õ´´ÁÓ¶¯ÐÙ½³¿ï»ªÐ­Ó¡Î£Ñ¹ÑáØÇÓõ³Ô¸÷ßººÏ¼ªµõÍ¬ÃûºóÀôÍÂÏòß¸ÏÅÂÀß¹Âðàî»ØØ¶ÒòàïÍÅÔÚÛ×ÛÙÛØ¹çÛÜÛÝµØÛÚÛÛ³¡»ø×³Ùí¶àÒÄ¿ä¼Ð¶áÞÅ¼éËýºÃåùÈçåúÍý×±¸¾Âè×Ö´æËïÕ¬ÓîÊØ°²ËÂÑ°µ¼¼â³¾ÞÍÒ¢¾¡ÒÙá¨ÓìËêÆñá§ÖÝÑ²¹®·«Ê¦Äê²¢×¯ÇìÑÓÍ¢ÒìÊ½³Úµ±âãââÃ¦ÐçÊùÈÖÏ·³ÉÍÐ¿¸¿ÛÇ¤Ö´À©ÞÑÉ¨ÑïÊÕÖ¼ÔçÑ®Ðñê¸ê¹ÇúÒ·ÓÐÖìÆÓ¶ä»úÐàÉ±ÔÓÈ¨´Î»¶´ËËÀ±ÏÄÊë®ÙÛÙàãâÏ«ãàÉÇº¹Ñ´ãáÈê½­³ØÎÛÌÀ¼³µÆ»ÒÒ¯êòÄ²áíáîáïçàçá°ÙÆîÖñÃ×ôéæúºìæûÏËæüÔ¼¼¶æýæþ¼ÍÈÒó¾ÍøÑòÓðÀÏ¿¼¶øñç¶úí²ÈâÀß¼¡³¼×ÔÖÁ¾ÊÉàâ¶ÖÛôÞÉ«Ü¹Ü·ÓóÉÖÜºÜ¶Ü»Ã¢Ü¼Ö¥Ü¸ò®³æÑªÐÐÒÂÎ÷¹Û½²»äÚ©ÚªÑÈÚ«Ðí¶ïÂÛËÏ·íÉè·Ã¾÷Õê¸º¹ì´ïÇ¨ÓØÆùÑ¸¹ýÂõÚúÐÏÄÇ°îÐ°ÚùîÅîÆãÆ±ÕÎÊ´³ÚæÈîÚå·ÀÑôÒõÕó½×Ò³â¼ÍÔÑ±³ÛÆë";
	char strokes7[]="Á½ÑÏ´®ÀöÂÒºàÄ¶²®¹ÀÙ£°éÁæÉìËÅËÆÙ¤µèµ«Î»µÍ×¡×ôÓÓÌåºÎÙ¢ÙÜÓàØý·ð×÷ØþØúÙ¡ÄãÓ¶ÙÝØû¿ËÃâ¶ÒÙî±ø¿öÒ±Àä¶³³õÉ¾ÅÐÅÙÀû±ðØÙÖúÅ¬½ÙÛ¾Û¿Àø¾¢ÀÍÏ»Ò½ØÕÂ±¼´È´ÂÑÏØ¾ýÁßÍÌÒ÷·ÍßÁßÄ·ñ°É¶Ö·Ôº¬Ìý¿ÔË±ÆôÖ¨ßÅÎâ³³Îü´µÎÇºðÎáÑ½ßÀ´ô³Ê¸æß»ÄÅß¼ß½ß¾Å»ß¿ßÂÔ±ßÃÇºÎØ¶ÚàñÔ°À§´ÑÎ§àðÛßÖ·Ûà¾ù·»ÛÐÌ®¿²»µ×ø¿Ó¿é¼áÌ³ÛÞ°ÓÎë·Ø×¹Éù¿ÇÞÆÛ¼ÈÑåû¶Ê¼ËÑýæ¡Ãîæ¤åþæ¥Í×·Áåüåýæ£æ¢æ¦æÚØÃ×ÎÐ¢ËÎÍêºêÊÙÞÎÎ²Äò¾ÖÆ¨²ãá¬á©áªá¯²íá«¸Úá­á®á°µºá±Ï£àøÕÊ±Ó´²âÑÐòÂ®âÐ¿âÓ¦ÆúÅªµÜÕÅÐÎÍ®áÝÒÛ³¹¼ÉÈÌìþìýß¯Ö¾ÍüâçâèÓÇâì¿ìâíâå³ÀâîÐÃâé»³âäâæâêâëÎÒ½äÅ¤°ç³¶ÈÅ°â·öÅú¶óÕÒ¼¼³­¾ñ°ÑÒÖÊã×¥Í¶¶¶¿¹ÕÛ¸§Å×ÞÒ¿ÙÂÕÇÀ»¤±¨¾ÜÄâØü¸Ä¹¥êººµÊ±¿õ¸ü¸Ëè¾É¼è»ÀîÐÓ²Ä´åè¼ÕÈ¶Åè½Êø¸ÜÌõÀ´Ñîè¿¼«ì£²½¼ßÃ¿ë¯ë°Çó¹¯ãèãéÍôÌ­ãêãëÐÚÆû·ÚÇßÒÊÎÖãäãìÉò³ÁãçÆããåãæÉ³Åæ¹µÃ»ããÅ½Á¤ÂÙ²×ãí»¦ãî·ºÁéÔî¾Ä×ÆÔÖ²Óì¾ÄµÀÎ×´ÓÌáñ¿ñáðµÒ±·¾ÁÂê¸¦ð®ÄÐµéî®ðÛðÜÁÆÔí¶¢ÒÓí¶ÉçìëÐãË½Íº¾¿ÇîÏµÎ³ç¡´¿ç¢É´¸ÙÄÉ×ÝÂÚ·×Ö½ÎÆ·ÄÅ¦ç£º±Ç¼ëÁÐ¤Öâ¶Ç¸ØëÀ¸Îë¿³¦Á¼ØÂÜÅÜ½ÎßÜÏÜÍÜÒ½æÂ«ÜËÜÎÜ¾·Ò°ÅÜÇÐ¾ÜÁ»¨·¼ÜÌÜÆÜ¿ÇÛÑ¿ÜÀÜÊÜÐÎ­ÜÂÜÃÜÈÜÉ²ÔÜÑËÕÜÓÜÄò°²¹½ÇÑÔÖ¤Ú¬Ú­ÆÀ×çÊ¶Õ©ËßÕïÚ®Öß´ÊÚ°Ú¯ÒëÚ±¹È¶¹õ¹õô¹±²Æ³à×ß×ãÉíÐùéíÐÁ³½Ó­ÔË½üåÂ·µåÃ»¹Õâ½øÔ¶Î¥Á¬³ÙÒØÓÊºªÛ¢ÇñÚüÚûÉÛÚýÛ¡×ÞÚþÁÚÓÏÀïÕë¶¤îÈîÇîÉÈòãÇÏÐãÈ¼äãÉãÊÃÆ×èÚèÚç°¢ÍÓÚé¸½¼ÊÂ½Â¤³ÂÚêÈÍâ½â¾â¿âÀâÁ·¹ÒûÇý²µÂ¿ð¯¼¦Âó¹ê";
	char strokes8[]="É¥¹ÔÈéÊÂÐ©Ø½Ïí¾©ÅåÀÐÑð°Û¼ÑÙ¦Ù¥Ù¬Ù®Ù«Ê¹Ù©Ö¶³ÞÙ¨ÀýÊÌÙªÙ§Ù°¶±¹©ÒÀÏÀÂÂ½ÄÕì²àÇÈ¿ëÙ­Ù¯ÍÃÙðÆä¾ßµäÙþÙý¾»Æ¾¿­º¯¹Îµ½ØÚÖÆË¢È¯É²´Ì¿Ì¹ôØÛØÜ¶ç¼ÁÛÀÊÆØÐ±°×ä×¿µ¥ÂôØÔÎÔ¾íÚá²ÞÈþ²ÎÊåÈ¡ÄØßÊßÏÖÜßÉÎ¶ºÇßÎßÈÅÞÉëºôÃü¾×ßÆßÍÅØÕ¦ºÍ¾ÌÓ½¸ÀÖäßÇ¹¾¿§ÁüßËßÌßÐ°¥àò¹Ì¹úÍ¼ÆÂÀ¤Ì¹ÛçÛáÆºÛãÛèÅ÷ÛêÛé¿ÀÛæÛå´¹À¬Â¢ÛâÛä±¸Ò¹ÑÙÆæÄÎ·î·Ü±¼ÄÝæ¨æ§ÃÃÆÞæªÄ·Ê¼½ã¹ÃÐÕÎ¯æ©ÃÏæß¼¾¹ÂæÛÑ§åµå´×Ú¹ÙÖæ¶¨ÍðÒË±¦Êµ³èÉóÉÐ¾ÓÇüÌë½ìá³á¸ÑÒá¶áµÁëá·ÔÀá²áº°¶á´¿ùá¹á»Î×àûàúÅÁÌûÁ±àùÖã²¯ÖÄÐÒµ×âÒµêÃí¸ý¸®ÅÓ·Ï½¨ÃÖÏÒ»¡åóåòÂ¼±ËÍùÕ÷áÞ¾¶ãÃÖÒÄîºö·ÞÌ¬ËËâ÷âôâóÕúÅÂ²ÀâïâòÁ¯âùâñÐÔâõ¹ÖâöÇÓâðâøãÞ»òê¨ìæìå·¿Ëù³ÐÅêÅûÌ§±§µÖÄ¨ÞÓÑº³éÃò·÷Öôµ£²ðÄ´ÄéÀ­ÞÔ°èÅÄÁà¹ÕÍØ°ÎÍÏÞÖ¾Ð×¾ÞÕÕÐÂ£¼ðÓµÀ¹Å¡²¦Ôñ·Å¸«Õ¶ì¶ÍúêÀ°ºê¾À¥ê»²ýÃ÷»èÒ×Îôê¿ê¼ëÃÅó·þèÂº¼±­½Üê½èÃèÆèËèÌËÉ°å¹¹èÁÍ÷èÊÎöÕíÁÖèÄÃ¶¹ûÖ¦èÈÊàÔæèÀèÅèÇÇ¹·ãèÉ¹ñÐÀÅ·ÎäÆçéâÅ¹Ã¥·Õí³Ä­ãð¾ÚãûãõºÓ·ÐÓÍÖÎÕÓ¹ÁÕ´ÑØÐ¹Çö²´ÃÚãüãï·¨ã÷ãôÅ¢ãöÅÝ²¨ÆüÄà×¢ÀáãùãúãýãóÓ¾ãñãòãøÐºÆÃÔóãþÇ³êÁÂ¯´¶Ñ×³´È²¿»ìÀÖËì¿ìÁ¾æÅÀ°Ö°æêóÄÁÎïáóáòºüáô¹·¾ÑÄüçäçãÍæÃµçâ»·ÏÖÎÍê±ß°»­çÞî¯³©¸í¾ÎðÞÅ±ðÝÑñµÄÓÛíìÃ¤Ö±Öªí·Îù·¯¿óí¸ÂëììÆíìí¸Ñ±üñ¶ñ·¿ÕóÃÙáÏßç¤ç¥ç¦Á·×éÉðÏ¸Ö¯ÖÕç§°íç¨ç©ÉÜÒï¾­çªØèÂÞÕßñôÒ®Ëà¹ÉÖ«·ô·Ê¼ç·¾ëÆëÇ°¹¿ÏëÅÓýëÈëÉ·ÎëÂëÄÉöÖ×ÕÍÐ²ô§Éá¼èÔ·ÜÛÜßÌ¦ÜæÃçÜÜ¿ÁÜÙ°ú¹¶ÜåÜÖÈô¿àÉ»±½Ó¢ÜÚÜÕÆ»ÜÞ×ÂÃ¯·¶ÇÑÃ©ÜâÜØÜÔÜÝ¾¥Ü×ÜàÜãÜäÜá»¢Â²ò±Ê­±íñÃÉÀ³Ä¹æÃÙÊÓÚ²Ú³ÊÔÚ´Ê«ÚµÚ¶³ÏÖïÚ·»°µ®Ú¸Ú¹¹îÑ¯ÒèÚº¸ÃÏê²ïÚ»Ú¼ÔðÏÍ°ÜÕË»õÖÊ··Ì°Æ¶±á¹ºÖü¹á×ªéîÂÖÈíºäÌöåÆåÄåÈåÊåÇµÏÆÈµüåÅÊöåÉÛ¥ÓôÛ§Û¤Û¨½¼ÀÉÛ£Û¦Ö£Û©²É½ðîÊÇ¥îËîÌ·°µöîÍîÏîÎÕ¢ÄÖ¸·ÂªÄ°½µÏÞÚëÉÂÁ¥ö¿ÓêÇà·Ç¶¥Çê½¤ÊÎ±¥ËÇâÂæàÊ»æáæâ¾Ôæã×¤ÍÕæå¼ÝæäææÓãð°Ãùö¼³Ý";
	char strokes9[]="ÁÙ¾ÙÍ¤ÁÁÇ×ÎêºîÇÖ±ã´Ù¶íÙ´¿¡ÙÞÇÎÀþÙ¸Ë×·ýÙµÙ·±£ÓáÙ¹ÐÅÙ¶Ù±Ù²Á©Ù³¼óÐÞ×ÈÑøÃ°¹ÚÌêÏ÷ØÝÇ°¹Ð½£²ªÓÂÃãÑ«ÙéÄÏÐ¶ÀåºñÊÜ±äÐðÅÑßÚßÛßåß×ßÖ×ÉßãßäåëÒ§ßÒ¿©ÔÛ¿ÈßÔÏÌßÝÑÊßÞ°§Æ·ßÓºå¶ßÍÛ¹þÔÕßßÏìßçßÑÑÆßÕßØßÙßÜ»©ßàßáßâßæßèÓ´ÄÄàóÐÍÛíÀÝÛò¶âÛóÛÒ¹¸Ô«Ûì¿ÑÛðÛÑµæÛë¿åÛîÛñ³ÇÛï¸´¿ü×àÆõÞÈ½±æ°Ò¦½ªæ­æ¯ÀÑÒÌæ±Òö×ËÍþÍÞÂ¦æ«æ¬½¿æ®ÄÈº¢ÂÏ¿ÍÐûÊÒå¶»ÂÏÜ¹¬·â½«æÙ³¢ÎÝÊºÆÁá¾á¼ÖÅÏ¿á½á¿ÂÍ²îÏïµÛ´øÖ¡°ïÓÄâÔâÓ¶ÈÍ¥ÞÄåôÍäåèÑå±ë´ýáßºÜáà»²ÂÉááÔõÅ­Ë¼µ¡¼±Ô¹×Üí¡âþÊÑ»Ðºã»ÖÐôºÞã¡¶²ÌñâúâûâýâüÄÕã¢Õ½±âìç°ÝÀ¨ÊÃÞ×Õü¹°Ë©ÞÙ¿½Æ´×§Ê°³Ö¹ÒÖ¸°´¿æÌôÍÚÎÎÌ¢Ð®ÄÓµ²ÞØÕõ¼·»ÓÅ²Í¦Õþ¹Êí½Ê©¼ÈêÃÐÇÓ³´ºÃÁ×òÕÑÊÇêÅêÄêÇêÆÖçÏÔêÂëÔ¿ÝèÒè×èÕ¼Ü¼ÏèÛèÞèÚ±ú°ØÄ³¸ÌÆâÈ¾ÈáèÏèÔèÖèØ×õÄûèÜ²éèÑ¼í¿ÂèÍÖùÁøèßÊÁèÙÕ¤±êÕ»èÎèÐ¶°èÓèÝÀ¸Ê÷ÍáéãÑêéå´ùéä²Ð¶Î¶¾±ÑÅþÕ±·úë±ÇâÈª±Ãí´½àä§ä¦Ñóä£ä©È÷Ï´ä¨ä®Âå¶´½òä¢ºéäªä¬¶ýÖÞä²ä­ä¡»îÍÝÇ¢ÅÉä¤½½ä¥×Ç²âä«¼Ãä¯»ëä°Å¨ä±ÏÑìÅÌ¿ÅÚ¾¼ìÆ±þìÄÕ¨µãìÂÁ¶³ãìÃË¸ÀÃÌþë¼êðêôÉüÇ£ºÝ½Æáõá÷¶ÀÏÁÊ¨áöÕøÓüáøÁáçéçè²£çêçæçìçëÉºÕäçå·©ççê²Éõ±Âî²î±½çî°Î·ðà°Ì½êÒßðß´¯·è¹ï½Ô»Êð§ÖÑÅèÓ¯ÏàíïÅÎ¶ÜÊ¡íííðíñÃ¼¿´íîÕ£ñæïò¾ØÉ°í¹Æö¿³í¼ÅøÑÐ×©íºí»Ñâí¿í¾ìð×æìóìñìîìï×£ÉñìôìòÓíØ®ÇïÖÖ¿ÆÃëïõïö´©ñ¸Í»ÇÔñ¹ÊúóÄ¸ÍóÆóÅÀàôÌ×Ñ°óÈÞ½áç«ÈÆç¬»æ¸øÑ¤ç­Âç¾ø½ÊÍ³¸×î··£ÃÀôàË£ÄÍñèÞÇëÏÎ¸ëÐµ¨±³ëÒÌ¥ÅÖëÓëÑÅßëÎÊ¤ëÕ°ûºúØ·ñãëÊëËëÌëÍëÖÂöô¨ô­ô®ô¯ÜëÜøÝ¢Üç¼ë´ÄÃ£²çÜúÜòÜïÜüÜîÒð²èÈ×ÈãÜûÜíÜ÷Üõ¾£Üô²ÝÜó¼öÜè»ÄÀó¼ÔÜéÜêÜñÜöÜùµ´ÈÙ»çÜþÜýÓ«Ý¡Ý£Ý¥ÒñÝ¤Ý¦Ý§Ò©ÜìÜðÅ°ºçò³òµò´ËäÏºò²Ê´ÒÏÂìÔéÑÜñÄñÅñÆñÇ°ÀôÁÒªêèÀÀ¾õÙê½ëÎÜÓïÚ½ÎóÚ¾ÓÕ»åÚ¿ËµËÐÚÀ·¡¼úêÚêÛÌù¹óêÜ´ûÃ³·ÑºØêÝôñ¸°ÕÔÅ¿éïéðéñÖáéòéóéõéôéöé÷ÇáÃÔ±Å¼£×·ÍËËÍÊÊÌÓåÌåËÄæÑ¡Ñ·Û­Û®Û¬ºÂ¿¤Û«ÛªÔÇôúÇõÖØ¸ÆîÐîÑîÒ¶Û³®ÖÓÄÆ±µ¸ÖîÓîÔÔ¿ÇÕ¾ûÎÙ¹³îÖîÕîØî×Å¥îÙ¹ëÎÅãËÃöãÌ·§¸óºÒ±ÝÚì¶¸Ôº³ýÚíÔÉÏÕÃæ¸ï¾ÂÒôñüÏîË³Ðëì©ìªÊ³¶üÈÄâÃ½È±ýÊ×ÏãæçÂî½¾æèÂæº§æé¹Ç¹íÅ¸Ñ»ð±ð²";
	char strokes10[]="³ËÙñ¸©¾ãÙ½Ùº°³ÙÂÙÄ±¶Ù¿µ¹¾óÌÈºòÒÐÙÃ½è³«ÙÅ¾ëÙÆÙ»ÄßÙ¾ÙÁÙÀÕ®ÖµÇãÙ¼½¡µ³¼æÚ£Ô©Ú¤Æà×¼Ú¡Á¹µòÁèÌÞÆÊØàØÞØß°þ¾çÛÂ·ËÄäÇäØÈÔ­ÛÅ¸çÅ¶ßêÉÚÁ¨¿ÞÏøÕÜßî²¸ºßßìÛÁÑäËô´½°¦ßñÌÆßòßíßéßëßïßð»½ßó°¡ÆÔàôÔ²Ûù¹¡°£ÂñÛøÆÒÛôÛõÛ÷ÛöºøÏÄÌ×ÞÊÞÉ¼§æ³æ²æ¶æ¸Äï¾êÉïæ·¶ðÃäÓéæ´æµæ¹Ø«Ô×º¦ÑçÏü¼Òå·ÈÝ¿í±öÉäåìÐ¼Õ¹åí¶ëÓøÇÍ·å¾þáÀáÁÏ¯àü×ùÈõÐìÍ½áâí¥Áµ¿ÖË¡í¦í£í¢í§í¤¶÷¹§Ï¢¿Ò¶ñã§ÇÄã©º·ã¨»Úã£ã¤ãªã¦ÎòÔÃã¥ÃõÉÈÈ­ÄÃêüÖ¿ÂÎ°¤´ìÕñÞÚÍìÎæÞÜÍ±À¦×½ÞÛ°Æº´ÉÓÄó¾è²¶ÀÌËð¼ñ»»µ·Ð§ôÍµÐ°½Õ«ÁÏÅÔì¹ì¸ÂÃì·êË»Î½úÉÎêÌÉ¹ÏþêÊÔÎêÍÍíêÉË·ëÞÀÊ²ñË¨ÆÜÀõèéÐ£èòÖêèàèáÑùºË¸ù¸ñÔÔèïèîèì¹ðÌÒèæÎ¦¿ò°¸èñèð×ÀèäÍ©É£»¸½ÛèêèâèãèåµµèçÇÅèëèí½°×®èè°ðÉÒÎàÀæÑ³ÊâÒó±Ðë¤ë³º¤Ñõ°±ë²Ì©Á÷½¬Õã¿£äºä·ä»ä½ÆÖºÆÀË¸¡ä´Ô¡º£½þä¼Í¿ÄùÏûÉæÓ¿ä³ä¸ä¹ÌéÌÎÀÔäµÁ°ä¶ÎÐ»ÁµÓÈó½§ÕÇÉ¬ÁÒìÈºæÀÓÖòÑÌ¿¾·³ÉÕìÇ»âÌÌ½ýÈÈ°®µùÌØÎþáüáùáúÀêáþâ¡ÀÇáûáýçôçîçóÖéçíçòçñ°àçõçðð¬Æ¿´ÉÅÏÁôÛÎî³ÐóðæðåÆ£ðáðâðãÕîÌÛ¾Ò¼²ðèðçðä²¡Ö¢Ó¸¾·¸ÞÖåÒæîÁ°»ÕµÑÎ¼àíôíòÕæÃßíóÑ£íÀ|íÄíÈíÆÕèíÉíÇÅéÆÆÉéÔÒíÁíÂíÃíÅÀù´¡ËîÏéìöìõÀëÃØ×âï÷³ÓÇØÑíÖÈïø»ý³ÆÕ­ñºÇÏÕ¾¾ºóÇ°ÊóÉËñóËÐ¦±ÊóÈóÊ·ÛôÎÎÉËØË÷½ôç®ç¯¾îÐåËçÌÐ¼Ìç°È±î¹î¸°Õ¸áÐßÎÌ³áë£êÈ¸ûñéºÄÔÅ°ÒËÊ³Üµ¢¹¢ÄôëÙ¿èÒÈë×ëÜ¸ìëØ½ºÐØ°·ëÝÄÜÖ¬´à¼¹ëÚëÛÔàÆêÄÔëßÅ§ô«³ôÖÂÒ¨óÂô²º½ô³°ãô°ô±½¢²ÕÑÞºÉÝ©Ý¶Ý±Ý´Ý°ÆÎÀòÉ¯Ý®Ý·Ý¯Ý¸Ý¬Ý¹Ý³Ý­ÄªÝ¨À³Á«ÝªÝ«Ý²»ñÝµÓ¨ÝºÝ»Ã§ÂÇò¯ÎÃò¸°öò·ò¾²ÏÑÁòºò¼ò»ò¶ò¿ò½ò¹ô¬ÙòË¥ÖÔôÀÔ¬ÅÛÌ»ÐäÍàñÈ±»êéÇëÖîÚÁÅµ¶ÁÚÂ·Ì¿ÎÚÃÚÄË­ÚÅµ÷ÚÆÁÂ×»ÚÇÌ¸Òêôø±ª²òÔôêÞ¼Ö»ßêßÁÞÂ¸Ôß×Êêàêá¸ÏÆðõÀõ»õÁ¹ªê¦éøÔØéù½Îéúéû½ÏÈèåÍåÐÍ¸ÖðåÏµÝÍ¾åÑ¶ºÍ¨¹äÊÅ³ÑËÙÔìåÒ·êåÎçß²¿Û¯¹ùÛ°³»µ¦¶¼×ÃÅäôüôýôû¾Æ¸ªîÚÇ®îÛÇ¯îÜ²§îÝîÞîßîàîá×êîâîã¼ØîäÓËÌú²¬ÁåîåÇ¦Ã­îæîçîèîéîêîëîìãÍãÎÔÄãÏÅãÚîÚïÚðÁêÌÕÏÝöÀöÁÄÑçïÍç¹Ë¶Ùñý°äËÌñþÔ¤âÄ¶öâÅÄÙæê³ÒÑé¿¥¸ß÷ÔÛËØªð³ð´ðµÑ¼Ñìð·ð¶Ô§ÍÒ";
	char strokes11[]="íèð¸ö³Ç¬ÙÈ¼ÙÙÊÙËÆ«ÙÉ×öÍ£ÙÌÅ¼ÍµÙÍÙÇ³¥¿þ¶µÊÞÃá¼õ´Õ»Ë¼ô¸±ÀÕÛÃ¿±ÞËÙë³×ØÑØÒÏáØÉ¾Çßô»£ÊÛÎ¨à§³ªà¦à¡ßþÍÙßüßú¿Ð×ÄÉÌßøßýßûà¢à¨·ÈÆ¡É¶À²ßõÅ¾ØÄßùÄöà£à¤à¥Ð¥ßöß÷È¦àöàõÛþÓò²ºÛýÜ¤ÛûÛúÛüÅà»ùÜ£Ü¥ÌÃ¶ÑÝÀÜ¡Ü¢Çµ¶é¶Â¹»ÉÝÈ¢æ½ÆÅÍñæ»æ¼»éæ¾æºÀ·Ó¤æ¿ÉôÊëËÞ¼Å¼ÄÒúÃÜ¿ÜÎ¾ÍÀáÇ³çÆé´ÞÑÂáÈáÆáÅáÃáÂ±ÀÕ¸áÄ³²á¡³£àýàþâØâÖÊü¿µÓ¹âÕâ×ÀÈµ¯åç²Ê±òµÃÅÇáãáäÓÁÏ¤ÓÆ»¼Äúí¨Ðüã­ã²¼Âã¬µ¿Çéã°¾ªÍïÌèã¯ã±Ï§ã®Î©µë¾å²Òã«²Ñµ¬¹ßÆÝê©ìèêýÅõÞæÞã¾ÝÞß´·½ÝÞàÄíÏÆµà¶ÞÊÚµôÞåÞáÌÍÆþÅÅÒ´¾òÂÓÌ½½Ó¿ØÍÆÑÚ´ëÞäÞÝÞçÂ°ÞâÖÀµ§²ôÞèÞÞÃô¾Èë·½ÌÁ²±Ö¸ÒõúÐ±¶ÏÐýìºì»×åêÏêÎÎî»Þ³¿²ÜÂüÍûèøèõÍ°èöÁºÃ·èôè÷¹£ÃÎËóÌÝÐµÊáèó¼ìèùÓûì¤éèéæéçºÁë´¸¢äÊäÌÑÄÒºº­ºÔäÃµí×ÍäÀÏýä¿ÁÜÌÊÊçÄ×ÌÔäÈäÇäÁäÄµ­ÓÙäÆÒù´ã»´Éî´¾»ìÑÍÌíÇåÔ¨äË×ÕäÂ½¥äÅÓæäÉÉøä¾ÇþÏ©ÍéÅë·éÑÉº¸ìÉìÊ»ÀìËìâË¬êõêöÀçâ¥ÁÔâ£â¨²þâ¢ÃÍ²Ââ§â¦â¤ÖíÃ¨ÂÊÇòÀÅÀíÁðçöËöð­ÌðÂÔÆè´ÃÈ¬ðêÑ÷ÖÌºÛðéð¨°¨ñäºÐ¿ø¸ÇµÁÅÌÊ¢íöíõÃÐí÷¿ô¾ìíøÌ÷ÑÛ×ÅÕö½ÃíÎ¹èíÐíÑíÊíÏÎøË¶íÌíÍíËÆ±¼Àµ»»ö½ÕÒÆ»àïùÒ¤ÖÏñ»¾¹ÕÂóÏµÑó×óÒóÔóÓ·û±¿óÎµÚóÐóÑóÕóÍ¼ãÁýóÖóÌÁ£ÆÉ´ÖÕ³ôÐôÏÀÛ¼¨Ð÷ç±Ðøç²ç³´Âç´çµÉþÎ¬Ãàç·±Á³ñç¸ç¹×ÛÕÀçºÂÌ×ºç»ç¶ÁçôÆôÇñ´ÒîôáñêñõñöÁÄÁûÖ°ñ÷æÀ²±ëä½Åëâëã¸¬ÍÑëåëáÁ³ô©ô¶ô·¶æ²°ÏÏô´´¬ôµåõÝÒÝ¼ÝÑ¹½¾Õ¾úºÊÝÊÝÅÝ¿²ËÝÃÝË²¤ÝÕÝ¾ÆÐÝÐÝÔÁâ·ÆÝÎÝÏÝÄÝ½ÝÍÌÑÝÉÝÂÃÈÆ¼Î®ÝÌÝÈÝÁÝÆÂÜÓ©ÓªÝÓÏôÈøÝÇÖøÐéòÇòÄòÆòÊòÂòÀòÅÖûòÁÇùÉßòÈ¹Æµ°òÃòÉÐÆÏÎôÂ´üÙóÏ®¸¤ñÊñËñÉñÌêêõûÄ±ÚÈµý»ÑÚÉÐ³ÚÊÚËÎ½ÚÌÚÍÚÎ²÷ÚÑÚÏÑèÚÐÃÕÚÒôùëàÏóêäêâêãÉÞÉâôöõÃõÂÖºÔ¾õÄ¾àÇûéü¸¨Á¾åÕ´þåÖåÓåÔÒÝÂßÛ±¶õÛ²Ðï·ÓÔÍÌªÒ°îíîîîïîðîñîòîôîóîõÍ­ÂÁîöî÷îøÕùÏ³îúîûîüîýïþï¢¸õÃúï£ï¤½ÂÒ¿²ùï¥ï¦ï§Òøï¨ãÐÑËãÑãÒãÓãÔÑÖãÕ²ûÓçÂ¡ÚñËåÚòËæÒþÚóÈ¸ö§Ñ©Â­ÁìÆÄ¾±âÆÏÚ¹ÝØ¸æëÆïæìæíæîðºð¹ð»ð¼¸ëð½ºèÂ¹ôïÂé»Æ¹¨";
	char strokes12[]="Ùô¸µÀü°ø´öÙÎÙÏ´¢ÙÐ°ÁÔäÊ£¸îÄ¼²©ØÊÏÃ³øà´Ìäà±¿¦à¯Î¹à«ÉÆÀ®à®ºíº°à©à³à¸´­à¹Ï²ºÈà°Ðúà¬ÔûÅçà­Ó÷à¶à·à²àµÜ§Ü¦Ü©±¤µÌ¿°ÑßÜ¨ËþÒ¼µì°ÂæÃæÄÐöÃ½ÃÄæÂæÁÉ©åîæÜ¸»ÃÂº®Ô¢×ð¾ÍÊôÂÅáËáÌáÊïúáÒÇ¶áÉáÎáÐáÑáÍáÏÛÏÙãÃ±ÃÝá¢·ùß±Ç¿åöåéÅíÓùáåÑ­±¯»ó»Ý³Í±¹¶èã·»ÌÈÇÐÊã¸Óäã¹ãµã³ã¶·ßã´À¢»Å¿®êªê¬ê«ìéÕÆ³¸êþÞòÞíÞñÈà×áÞïÃèÌá²åÒ¾ÞîÞëÎÕ´§¿«¾¾½ÒÞéÔ®ÞêÀ¿Þì²ó¸éÂ§½Á´êÉ¦ËÑ´î²ëÞð³¨É¢¶Ø¾´±óì³°ßË¹ÆÕ¾°ÎúÇç¾§êÐÖÇÁÀÔÝÊîÔøÌæ×î³¯ÆÚÃÞÆå¹÷°ô×Ø¼¬ÅïÌÄé¦É­é¢Àâ¿Ãèþ¹×èûé¤ÒÎé£Ö²×µé§½·èüèýé¡ÍÖÒ¬é¥èúÀÆì¥ÆÛ¿îÖ³éééêÌºë¥ë§ë¦µªÂÈÇèíµÓå¶ÉÔü²³ä×ÎÂäÍÎ¼¸ÛäÖ¿ÊÓÎÃìÅÈäØÍÄäÏäÔäÕºþÏæÕ¿äÒäÐäÎÍåÊªÀ£½¦äÓ¸ÈäÑ³ü×Ì»¬ÖÍ±º·Ù½¹ìÌÑæìÍÈ»ÖóÅÆë¹Ï¬ê÷¶¿êøêùâ©â«ÐÉâ¬â®ºïâ­âª»«è¢è¡×Áçúçùçûç÷çþçýçüÁÕÇÙÅýÅÃÇíçøê³Éûå¸·¬î´³ëÊè¶»Í´Æ¦Á¡ðëðîðíðððì»¾ðïµÇð©Íîñåíüíûíùíúïó¶ÌÏõíÒÁòÓ²È·¼ïì÷Â»ìøÇÝÏüïû³ÌÉÔË°½Ñ´°¾½´ÜÎÑ¿¢Í¯ñµóÚµÈ½îóÜ·¤¿ðÖþÍ²´ð²ßóØóÙÉ¸óÝóÛôÑËÚôÒÔÁÖà·à×ÏÐõôêç¼ç½¼êÃåÀÂç¾ç¿¼©çÀçÁ¶ÐçÂçÃçÄ»ºµÞÂÆ±àçÅÔµçÆÏÛÏèôâÇÌñóñëñøÁªÙõÆ¢ÌóëæÀ°Ò¸ëç¸­ëèÇ»ÍóëêëëëìëéôªÊæË´ô¸Í§ÝæÝàÂäÝáÝ×ÝÙÝØ¸ðÝÖÆÏ¶­ÝâºùÔáÝç´ÐÝÚ¿ûÝãÝßÝÝµÙÝÛÝÜÝÞ½¯ÝäÝåòÐòÖ»×òÕÍÜÖëòÒòÔ¸òòËòÎÂùÕÝòÌòÍòÏòÓÑÑòÑ½Ö²ÃÁÑ×°ñÎÙöÔ£È¹ñÍñÏ¿ãñÐñûêëõýõüîºÚÓÚÔÚÕÐ»Ò¥°ùÚÖÇ«Ú×õõ¸³¶ÄêåÊêÉÍ´ÍâÙÅâêæ³Ãôò³¬Ô½Ç÷õÌ°ÏµøõÉõÊÅÜõÅõÆõÇõËõÈ¼ùéý±²»Ô¹õéþê¡ê¢¹¼±ÆÓâ¶ÝËìå×Óö±é¶ôåÚåØåÙµÀÒÅõ¢õ¡º¨ôþËÖÓÔÊÍÁ¿Öýï©ÆÌïªï«Á´ï¬ÏúËøï®ï­³ú¹øï¯ï°Ðâï±ï²·æÐ¿ï³ï´ïµÈñÌàï¶ï·ï¸ï¹À»ãÖÀ«ã×¸ô°¯Ï¶ÑãÐÛÑÅ¼¯¹Íö©ö¨ö¦º«ò¡¼Õò¢ò£ò¤ì«â¸÷ÏâÇÀ¡âÈ²öÆ­æïÉ§æðöÏÂ³öÐð¾ð¿¾éðÀ¶ìðÁðÂðÃÊòºÚíéö½¶¦";
	char strokes13[]="´ßÙÑÉµÏñØâ½ËÇÚµþàÄÐáà¼àÉàÊà¾àªÉ¤àÁÊÈàÃÎËËÃàÍàÆàÂàËàºà¿àÀàÅàÇàÈàÌà»à½ËúëóËÜÌÁÈûÜªÌîÜ«Ä¹æÇÏ±ëôæÊæÅ¼Þ¼µÏÓæÈæÉæÆÇÞÄ¯ÞÏáÓáÔáÕ»ÏÄ»Á®âÚÀªì°áæÎ¢Ïë³îí©ÓúíªÒâÓÞ¸Ðãº´Èã»É÷Éåê®ê­ÞõÞø²«´¤Þö¸ãÞ÷ÞúÞùÌÂ°áÐ¯ÞôÉãÞó°ÚÒ¡±÷Ì¯Ãþë¸ÊýÕåÐÂì¼êÑÏ¾êÒÅ¯°µé²é©´ª´»é«Ð¨³þé¬Àãéªé¹é¸é®é¨¿¬é±éºÂ¥é¯¸Åé­ÓÜé´éµé·é°é³é¶»±ì¦ì§Ðª¸èµî»Ùì±ë¨ëµäçÔ´äÛÁïäéÒçäßäàÏªËÝäÚäåÈÜäãÄçäâäáäèµáäæ×ÒÌÏää¹öäÙäÜÂúäÞÂËÀÄÂÐ±õÌ²ÀìÄ®äÝìÑìÓ»Í¼åìÏÉ·ÃºìãÕÕìÐìÒìÎìÔìÕëºêúÏ×éàÔ³éáè£è¦è¥è§º÷è¤ÈðÉª¹åÕç»ûîµÌµðò³Õ±Ôðóðôðö´áðñð÷ðõðªÃËíý¾¦Ë¯î¡¶½î¢ÄÀíþ½Þ²Ç¶ÃÃé°«ÅðíÖµïÂµ°­Ëé±®íÔÍëµâíÕíÓí×ÅöÙ÷½ûìù¸£ïþ°ÞÖÉïý³íöÕ¿ßñ½¿úñ¼óÞóáóßóãóâ¿ê³ïóàÇ©¼òÁ¸Á»ôÓ¾¬¸¿çÈçÇ·ìçÉ²øçÊçËçÌçÍî»ÕÖ×ïÖÃÊðÈºôÈñìÆ¸ÒÞËÁëíÐÈëòëîëñÈùÑü¸¹ÏÙÄåëïëðÌÚÍÈ¾Ëô¹ôºÝõÃÉËâÝòØáÆÑÝôÕôÝóÝðÝìÝïÝèÐîÈØÝîÝéÝêËòÝí±ÍÀ¶¼»ÝñÝ÷ÝöÝëÅîÓÝòÙÓ¼¶ê·äò×òØòÚòÝòÛòÜÍÉÎÏòÞÑÃÒáôÃôÄñÔñÖñÑÂãñÓñÕ¹ÓñÒêìõþ½âö¡´¥ö¤Õ²ÓþÌÜ½÷Ã¡ÚØÚÙÃý»¿õ÷ºÑõöÀµôôôó¸úõÐõÓ¿ç¹òõ¼õÍÂ·ÌøõÎõÏõÑ¶åõÒ¶ãê£·ø¼­ÊäàÎ´Ç±ÙåÜåÞåÝÇ²Ò£åÛ±ÉÛ´Û³Ûµõ¤ÀÒ³êÍªõ¥õ£½´¼øïºÕàï»´íÃªï¼ï½ï¾ï¿ÎýïÀÂà´¸×¶½õÏÇïÃïÁïÂïÄ¶§¼ü¾âÃÌïÅãØãÙãÚÕÏïôÓºöÂ³ûÁãÀ×±¢Îí¾¸½ùÑ¥°Ðè¸è¹ÔÏÒÃÆµÍÇò¥Ó±ì¬âÉÁóâÊæñæòå¹æó÷»÷º÷Õ¿ý»êöÑöÒöÓöÔöÖ±«ö×öØðÄÈµðÅðÆðÇÅôðÈ÷ä¹ÄÊóö´Áä";
	char strokes14[]="öµö¶ÙÒÁÅÙÖÉ®ÙÕÙÔÙ×ËÛÙÓ¾¤µÊØäØãØËËÔàÕàÖàÒàÐ¼ÎàÑ¸ÂØÅÐêÂïàÏàÔàÓà×ÛÓÜ¬¾³ÊûÜ­ÉÊÇ½Ü®â¹â·æÎæÐæÑæËµÕæÌæÏÄÛæÍ·õ²ì¹Ñå»ÁÈÕ¯åïáÖá£á¤âÛÁÎ±×ÕÃÔ¸Ä½í«Âýã¼¿¶½Øê¯åºë¡Ë¤ÕªÞû´ÝÞýÄ¡ß¡ÁÌÞüÆ²ÞþÇÃÎÓì½ÆìêÔêÓôßéÇéÅé»°ñé¼Õ¥é¾é¿éÁÁñÈ¶é½éÂéÃéÀ¼÷éÄéÆéÊÄ£Ç¸éëØ¹µÎäïÆ¯ÆáäõÂ©ÑÝäîäíäöäôÂþäðÊþÕÄäñÑúäëäìäòÎ«äêäóä÷É¿Ï¨ÐÜÑ¬ÈÛìÖÎõ°¾êûâ°â¯è©Ñþè¨Á§ÝùÒÉðúðøðýðùðüðþÎÁðûÊÝ´ñî¥Øºî£î¦³òî¤µúíØíÙíÜ±Ì¼îíÚÌ¼²êíÛ´Å´èìúÎÈñ¿ñ¾ñÀ½ß¶Ëóë¹¿óä²­»þËãóíóé¹ÜóîóåóæóêÂáóìóïóèóç´âôÔôÕ¾«ôÖôëôìçÎçÏçÐÓ§ËõçÑçÒó¿î½î¼µÔ´äôäôãñí¾ÛÕØ¸¯°òëöëõ²²¸àë÷Ä¤ê°ÓßÌòÎèô»ÝûÞ¤Þ£ÝøÃïÂûÕáÎµÝý²ÌÄèÇ¾ÝúÝüÝþÞ¢°ª±ÎÞ¡ÊñÖ©òãÃÛòàÀ¯òìòáòèòâòçòæòéòßòäòêÓ¬òå²õòëÉÑÅá¹üñÛºÖñÙñØñÚñ×ÍÊêíö¢ÊÄÌ·ÚÚÚÛÀ¾Æ×ÚÜºÀÃ²×¸êç×¬ÈüºÕõÕõ½õÔÓ»³ìÔ¯Ï½Õ·À±ÔâÕÚÛ·Û¶õ¨õ©½ÍÃ¸¿áËáõªõ¦õ§ÄðöÆöÇïÆïÇïÏïÈïÉïÊÇÂïñ¶ÍïËïÌïÍ¶ÆÃ¾ïÎïÐïÑãÛËí´ÆöÃÐèö«öª¾²÷°÷±èºÉØ¿ÅâËÂøæôÂâæõ÷¾÷¼÷Ö÷ÉÆÇ÷ÈöÙöÚöÛöÜöÝöÞÏÊößöàðÉðÊ÷½ðËðÌðÍ÷áØ¾±Ç";
	char strokes15[]="ö·ö¸½©Æ§ÙØÙÙÁÝÅüØåÛÄàÜàØÖö³°Ë»àÚÎûºÙàáàÝÒ­àâàÛàÙàßàààÞ¸ÁÜ¯ÔöÐæÄ«¶ÕæÒå¼ÂÄåðá×áØá¥á¦´±âÜÓ°áçµÂ»ÛÎ¿±ïÔ÷ã¾ã¿º©ã½¶®Â¾Ä¦¾ï³ÅÈöËºß¤×²³·ÁÃÇË²¥´é×«Äìß¢ß£ß¥ÇÜ·óÄº±©åßéÎ²ÛéÈ·®éËéÌÕÁºáéÉÓ£éÏÏðéÍÒãëøÅËÇ±ÁÊÌ¶³±äûäúäýäü³Î³ºäùäøÅìÀ½°ÄÊììÚìÙì×ìØë»â±â²èªè­è®è¯è°è¬è«çÜñ¡ñ¤ñ£Áö±ñÌ±ñ¢î§Ï¹î¨Â÷Þ«Äë°õíßÀÚÅÍíÝ¿ÄíÞð¢ð¡µ¾¼Ú»ü¸åñÁ¼ýÏäóðóò×­ÆªóóóñÂ¨ôÛô×ôÚºýôØôÙçÓçÔÉÉçÕôÉôÊôåôæñîñïñù´Ï±ìÌÅÏ¥ëùô¼ËÒÊßÞ¬Þ¦½¶ÈïÞ¥Þ©Þ¨Þ§Þ­ÔÌÞªë½òòÐ«òõ»Èòùòðòöòøòúòóòñºûµûòïò÷òíòîòô°ýÈìñÝñÜêîêïö£ÚÝÇ´ÚÞÍãÔ¥ØÓô÷ÌËÈ¤Ì¤õÖõ×¾áõØÌßõÛ²È×ÙõÙõÚõÜõÝÌÉê¤åà×ñõ¬´¼×í´×õ«öÈïÒÕòïÓÄ÷ïÔÄøïÕïÖ¸ä°÷ï×ïØïÙÏöÕðö¬Ã¹¿¿ØÌÐ¬°°÷²÷³Ìâò¦ò§ÑÕ¶îÆ®÷ÐâÌâÍæöº¡÷¿÷À÷Ø÷×÷ÊöáöâöãöäÀðöåöæöçöèöéöêðÎðÏº×÷âÀè";
	char strokes16[]="ì´ö¹öºÈå¼½ÄýØæ×ìàäÆ÷Ø¬ÔëàæÊÉàåàçàèàãà÷ÛÔ±ÚÛÕæÔæÓÙøå¾âÝâÞáèí­í¬ãÀº¶Ð¸°ÃÀÁãÁº³ß¦ÀÞÉÃ²ÙÇæß§ß¨ËÓÕûìµêÕéØéÔé×éÐÇÁéÒéÙ³ÈéÓ³÷éÖéÚéÕéÑì¨éìë©ë«ëªÂºÔèå¢å¤å£¼¤å¥å¡äþ±ôìäÈ¼ÁÇìÜÑàìÛìÝêñâ³Ì¡è±Æ°ê´êµñ¦ñ§ñ¬ÕÎñ©È³ñ«ñ¨ñ¥ñªîÂî©îªÆ³î«Ä¥íàíá»ÇìûÄÂð£Áþ¸Ýóõóô´Ûóöó÷óøÀºÀéÅñ¸âÌÇôÜ²ÚçÖç×çØçÙ½Éî¾ôËôçº²°¿ñññðÅÕñúì¢ÅòëúÉÅÕéÞ³Þ®ÀÙ±¡Þ¶Þ±Þ²Ñ¦ÞµÞ¯Þ°Ð½Þ´Êíó¦ó£ó¢ÈÚòûó¥Ãøòýó¤òüó¡òþºâå½ñÞØÍÔÞÔùõâõàõßõáõÞõäõåÌãõãÕÞê¥±æ±çåá±ÜÑûåâÛ¸õ®õ­õ¯ÐÑÃÑÈ©öÉïÚïÛïÜïÝïÞ¾µïáïßïàÚôµñ»ôö®ö­ÄÞÁØµå÷´ÇÊò¨ò©µßòªì­ì®²Í÷Ú÷Û÷Ù÷Ì÷Ëöëöìöíöîöïöðöñöòöóöô¾¨öõööðÐðÑðÒõº÷å÷æÙäÇ­Ä¬";
	char strokes17[]="÷üÀÜàéº¿ÌçàêÛÖº¾æÕæÖÈæáÚ»Õí®í¯Å³´÷ë¢ßªß©²ÁÊïëüÌ´Ï­éÜéÛéÞéÝÃÊå¨å©å¦å§åªÔïÛÆ¾ôâ´è´è²è³ê¶î¶°©ñ­ð«ÇÆÖõµÉË²Í«î¬íãÁ×½¸íâËëóûóú´Øóþóùóüóý»ÉÃÓÔã¿·÷ã·±ôíóÀóÁîÀî¿ôèÒíâßëþÍÎì¡±ÛÓ·ÒÜëýëûô½Þ¹Þ¸Þ·Þ»½å²ØÃêÞºó§ó©ó«óªÂÝó®ó°ó±ó¬ó¯ó­ó¨ñßÏåì²åÀ»íáÙõùõøÉÄÓ®å¿µ¸õèÌ£õæõç±èåäåãõ°õ±öÊïâïãÁÍïäïåïæïçïèïéïêïëãÄËªÏ¼¾ÏÙåÖè÷Â÷Á÷ÍÎºö÷öøÈúöùöúöûöüöýöþðÓðÔðÕðÖ÷çð¤÷ì÷ííê÷÷÷ýÈ£";
	char strokes18[]="ö»ÙßÙæÏùÒÍãÂ´ÁêÖê×éßÆÙìÞèµñ¯ñ±ñ°ñ®Õ°î­öÄíäíæô¡ô£ô¢ôÝ·­ô¾ÅºÞ¼ÌÙ·ªó²ó´ó³óµ½ó¸²ö¥õ¾±Äõ¿³ùååõ²öÌöËïìÀØïíÁ­ïîöÅ÷·÷¶±Þ÷µò«÷Ñð¥÷Ä÷Ã××÷Ü÷¡÷¢÷£÷¤÷¥ðØÓ¥";
	char strokes19[]="÷î÷ð÷ï÷øàëÄõáÛÅÊß«ÔÜÆØå«å­å¬±¬è·°ê½®Ñ¢íåô¤²¾ô¦ô¥çÚÙú¸þô¿ÔåÞ½Þ¿Ä¢Þ¾Ð·ó¸Ùùó¹ó·ó¶ôÅñà¾¯ÚßµÅ²äõìõé¶×õíõêõë´ÚÛ¹õ³õ´õµ÷éïïö¯ö°ÃÒ÷¸÷¹²üæ÷÷Å÷Æ÷Ý÷Î÷¦÷§÷¨±î÷©÷ª÷«ð×÷èÂ´";
	char strokes20[]="ôð÷ñíëØ»ÈÂ½ÀÈÀæ×Î¡ÈÁêØå¯å®¹àâµè¶ÛÇ¼®Å´×ëÒ«ÞÁÞÀÈäóºÆ©ÔêõîÛºõ·õ¶ïðö±ò¬Ü°æø÷ÞÄ§÷¬÷­ÁÛ";
	char strokes21[]="÷®÷ô÷ó÷ò÷õö¾÷ùÙçêÙå°ìßñ²íçìüåñó»´À¸Óõïõ¸öÍÂ¶°ÔÅùò­Ëè";
	char strokes22[]="÷¯÷ê÷öÜ±ÄÒÜ²ë¬È¿ð¦ñòÕºÞÂõñõðÏâ";
	char strokes23[]="ö²÷Ó÷Ò÷Çå÷ðÙ÷ëß¬¾ðñ³¹ÞôõõòÈ§";
	char strokes24[]="÷ß÷û÷ú÷þå±´£îÃó¼áéñáõóöÎ";
	char strokes25[]="÷àâÎàìí°ß­ôî";
	char strokes26[]="ó½ìà";
	

	
	
	scanf ("%s",&name);
	big=strlen (name);
	while (test<big)
	{
		while (name[test]!=strokes1[mark]||name[test+1]!=strokes1[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=4)
				break;
		}
		if (name[test]==strokes1[mark]&&name[test+1]==strokes1[mark+1])
			istrokes=istrokes+1;
		mark=0,chars=0;
		
		while (name[test]!=strokes2[mark]||name[test+1]!=strokes2[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=48)
				break;
		}
		if (name[test]==strokes2[mark]&&name[test+1]==strokes2[mark+1])
			istrokes=istrokes+2;
		mark=0,chars=0;
		
		while (name[test]!=strokes3[mark]||name[test+1]!=strokes3[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=198)
				break;
		}
		if (name[test]==strokes3[mark]&&name[test+1]==strokes3[mark+1])
			istrokes=istrokes+3;
		mark=0,chars=0;
		
		while (name[test]!=strokes4[mark]||name[test+1]!=strokes4[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=278)
				break;
		}
		if (name[test]==strokes4[mark]&&name[test+1]==strokes4[mark+1])
			istrokes=istrokes+4;
		mark=0,chars=0;
		
		while (name[test]!=strokes5[mark]||name[test+1]!=strokes5[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=404)
				break;
		}
		if (name[test]==strokes5[mark]&&name[test+1]==strokes5[mark+1])
			istrokes=istrokes+5;
		mark=0,chars=0;
		
		while (name[test]!=strokes6[mark]||name[test+1]!=strokes6[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=696)
				break;
		}
		if (name[test]==strokes6[mark]&&name[test+1]==strokes6[mark+1])
			istrokes=istrokes+6;
		mark=0,chars=0;
		
		while (name[test]!=strokes7[mark]||name[test+1]!=strokes7[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1064)
				break;
		}
		if (name[test]==strokes7[mark]&&name[test+1]==strokes7[mark+1])
			istrokes=istrokes+7;
		mark=0,chars=0;
		
		while (name[test]!=strokes8[mark]||name[test+1]!=strokes8[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1352)
				break;
		}
		if (name[test]==strokes8[mark]&&name[test+1]==strokes8[mark+1])
			istrokes=istrokes+8;
		mark=0,chars=0;
		
		while (name[test]!=strokes9[mark]||name[test+1]!=strokes9[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1508)
				break;
		}
		if (name[test]==strokes9[mark]&&name[test+1]==strokes9[mark+1])
			istrokes=istrokes+9;
		mark=0,chars=0;
		
		while (name[test]!=strokes10[mark]||name[test+1]!=strokes10[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1466)
				break;
		}
		if (name[test]==strokes10[mark]&&name[test+1]==strokes10[mark+1])
			istrokes=istrokes+10;
		mark=0,chars=0;
		
		while (name[test]!=strokes11[mark]||name[test+1]!=strokes11[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1392)
				break;
		}
		if (name[test]==strokes11[mark]&&name[test+1]==strokes11[mark+1])
			istrokes=istrokes+11;
		mark=0,chars=0;
		
		while (name[test]!=strokes12[mark]||name[test+1]!=strokes12[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1276)
				break;
		}
		if (name[test]==strokes12[mark]&&name[test+1]==strokes12[mark+1])
			istrokes=istrokes+12;
		mark=0,chars=0;
		
		while (name[test]!=strokes13[mark]||name[test+1]!=strokes13[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1044)
				break;
		}
		if (name[test]==strokes13[mark]&&name[test+1]==strokes13[mark+1])
			istrokes=istrokes+13;
		mark=0,chars=0;
		
		while (name[test]!=strokes14[mark]||name[test+1]!=strokes14[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=790)
				break;
		}
		if (name[test]==strokes14[mark]&&name[test+1]==strokes14[mark+1])
			istrokes=istrokes+14;
		mark=0,chars=0;
		
		while (name[test]!=strokes15[mark]||name[test+1]!=strokes15[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=620)
				break;
		}
		if (name[test]==strokes15[mark]&&name[test+1]==strokes15[mark+1])
			istrokes=istrokes+15;
		mark=0,chars=0;
		
		while (name[test]!=strokes16[mark]||name[test+1]!=strokes16[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=516)
				break;
		}
		if (name[test]==strokes16[mark]&&name[test+1]==strokes16[mark+1])
			istrokes=istrokes+16;
		mark=0,chars=0;
		
		while (name[test]!=strokes17[mark]||name[test+1]!=strokes17[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=344)
				break;
		}
		if (name[test]==strokes17[mark]&&name[test+1]==strokes17[mark+1])
			istrokes=istrokes+1;
		mark=0,chars=0;
		
		while (name[test]!=strokes18[mark]||name[test+1]!=strokes18[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=142) 
				break;
		}
		if (name[test]==strokes18[mark]&&name[test+1]==strokes18[mark+1])
			istrokes=istrokes+18;
		mark=0,chars=0;
		
		while (name[test]!=strokes19[mark]||name[test+1]!=strokes19[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=158)
				break;
		}
		if (name[test]==strokes19[mark]&&name[test+1]==strokes19[mark+1])
			istrokes=istrokes+19;
		mark=0,chars=0;
		
		while (name[test]!=strokes20[mark]||name[test+1]!=strokes20[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=82)
				break;
		}
		if (name[test]==strokes20[mark]&&name[test+1]==strokes20[mark+1])
			istrokes=istrokes+20;
		mark=0,chars=0;
		
			while (name[test]!=strokes21[mark]||name[test+1]!=strokes21[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=52)
				break;
		}
		if (name[test]==strokes21[mark]&&name[test+1]==strokes21[mark+1])
			istrokes=istrokes+21;
		mark=0,chars=0;
		
			while (name[test]!=strokes22[mark]||name[test+1]!=strokes22[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=30)
				break;
		}
		if (name[test]==strokes22[mark]&&name[test+1]==strokes22[mark+1])
			istrokes=istrokes+22;
		mark=0,chars=0;
		
			while (name[test]!=strokes23[mark]||name[test+1]!=strokes23[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=28)
				break;
		}
		if (name[test]==strokes23[mark]&&name[test+1]==strokes23[mark+1])
			istrokes=istrokes+23;
		mark=0,chars=0;
		
			while (name[test]!=strokes24[mark]||name[test+1]!=strokes24[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=24)
				break;
		}
		if (name[test]==strokes24[mark]&&name[test+1]==strokes24[mark+1])
			istrokes=istrokes+24;
		mark=0,chars=0;
		
			while (name[test]!=strokes25[mark]||name[test+1]!=strokes25[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=12)
				break;
		}
		if (name[test]==strokes25[mark]&&name[test+1]==strokes25[mark+1])
			istrokes=istrokes+25;
		mark=0,chars=0;
		
			while (name[test]!=strokes26[mark]||name[test+1]!=strokes26[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=4)
				break;
		}
		if (name[test]==strokes26[mark]&&name[test+1]==strokes26[mark+1])
			istrokes=istrokes+26;
		mark=0,chars=0;
		
		
		printf ("Ç°%d¸ö×ÖµÄ×Ü±Ê»­Îª%d\n",(test+2)/2,istrokes);
		test=test+2;
	} 
	printf ("×Ü±Ê»­Îª%d\n",istrokes);
	getchar ();
	getchar ();
	return 0;
}

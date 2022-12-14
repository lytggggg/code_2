??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 2   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
   *  
 *   $ D a t e :                   1 7 .   J a n u a r y   2 0 1 3  
 *   $ R e v i s i o n :           V 1 . 4 . 0  
 *  
 *   P r o j e c t :               C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ f i r _ e x a m p l e _ f 3 2 . c  
   *  
   *   D e s c r i p t i o n :     E x a m p l e   c o d e   d e m o n s t r a t i n g   h o w   a n   F I R   f i l t e r   c a n   b e   u s e d  
   *                               a s   a   l o w   p a s s   f i l t e r .  
   *  
   *   T a r g e t   P r o c e s s o r :   C o r t e x - M 4 / C o r t e x - M 3  
   *  
 *   R e d i s t r i b u t i o n   a n d   u s e   i n   s o u r c e   a n d   b i n a r y   f o r m s ,   w i t h   o r   w i t h o u t  
 *   m o d i f i c a t i o n ,   a r e   p e r m i t t e d   p r o v i d e d   t h a t   t h e   f o l l o w i n g   c o n d i t i o n s  
 *   a r e   m e t :  
 *       -   R e d i s t r i b u t i o n s   o f   s o u r c e   c o d e   m u s t   r e t a i n   t h e   a b o v e   c o p y r i g h t  
 *           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r .  
 *       -   R e d i s t r i b u t i o n s   i n   b i n a r y   f o r m   m u s t   r e p r o d u c e   t h e   a b o v e   c o p y r i g h t  
 *           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r   i n  
 *           t h e   d o c u m e n t a t i o n   a n d / o r   o t h e r   m a t e r i a l s   p r o v i d e d   w i t h   t h e  
 *           d i s t r i b u t i o n .  
 *       -   N e i t h e r   t h e   n a m e   o f   A R M   L I M I T E D   n o r   t h e   n a m e s   o f   i t s   c o n t r i b u t o r s  
 *           m a y   b e   u s e d   t o   e n d o r s e   o r   p r o m o t e   p r o d u c t s   d e r i v e d   f r o m   t h i s  
 *           s o f t w a r e   w i t h o u t   s p e c i f i c   p r i o r   w r i t t e n   p e r m i s s i o n .  
 *  
 *   T H I S   S O F T W A R E   I S   P R O V I D E D   B Y   T H E   C O P Y R I G H T   H O L D E R S   A N D   C O N T R I B U T O R S  
 *   " A S   I S "   A N D   A N Y   E X P R E S S   O R   I M P L I E D   W A R R A N T I E S ,   I N C L U D I N G ,   B U T   N O T  
 *   L I M I T E D   T O ,   T H E   I M P L I E D   W A R R A N T I E S   O F   M E R C H A N T A B I L I T Y   A N D   F I T N E S S  
 *   F O R   A   P A R T I C U L A R   P U R P O S E   A R E   D I S C L A I M E D .   I N   N O   E V E N T   S H A L L   T H E  
 *   C O P Y R I G H T   O W N E R   O R   C O N T R I B U T O R S   B E   L I A B L E   F O R   A N Y   D I R E C T ,   I N D I R E C T ,  
 *   I N C I D E N T A L ,   S P E C I A L ,   E X E M P L A R Y ,   O R   C O N S E Q U E N T I A L   D A M A G E S   ( I N C L U D I N G ,  
 *   B U T   N O T   L I M I T E D   T O ,   P R O C U R E M E N T   O F   S U B S T I T U T E   G O O D S   O R   S E R V I C E S ;  
 *   L O S S   O F   U S E ,   D A T A ,   O R   P R O F I T S ;   O R   B U S I N E S S   I N T E R R U P T I O N )   H O W E V E R  
 *   C A U S E D   A N D   O N   A N Y   T H E O R Y   O F   L I A B I L I T Y ,   W H E T H E R   I N   C O N T R A C T ,   S T R I C T  
 *   L I A B I L I T Y ,   O R   T O R T   ( I N C L U D I N G   N E G L I G E N C E   O R   O T H E R W I S E )   A R I S I N G   I N  
 *   A N Y   W A Y   O U T   O F   T H E   U S E   O F   T H I S   S O F T W A R E ,   E V E N   I F   A D V I S E D   O F   T H E  
 *   P O S S I B I L I T Y   O F   S U C H   D A M A G E .  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 / * *  
   *   @ i n g r o u p   g r o u p E x a m p l e s  
   * /  
  
 / * *  
   *   @ d e f g r o u p   F I R L P F   F I R   L o w p a s s   F i l t e r   E x a m p l e  
   *  
   *   \ p a r   D e s c r i p t i o n :  
   *   \ p a r  
   *   R e m o v e s   h i g h   f r e q u e n c y   s i g n a l   c o m p o n e n t s   f r o m   t h e   i n p u t   u s i n g   a n   F I R   l o w p a s s   f i l t e r .  
   *   T h e   e x a m p l e   d e m o n s t r a t e s   h o w   t o   c o n f i g u r e   a n   F I R   f i l t e r   a n d   t h e n   p a s s   d a t a   t h r o u g h  
   *   i t   i n   a   b l o c k - b y - b l o c k   f a s h i o n .  
   *   \ i m a g e   h t m l   F I R L P F _ s i g n a l f l o w . g i f  
   *  
   *   \ p a r   A l g o r i t h m :  
   *   \ p a r  
   *   T h e   i n p u t   s i g n a l   i s   a   s u m   o f   t w o   s i n e   w a v e s :     1   k H z   a n d   1 5   k H z .  
   *   T h i s   i s   p r o c e s s e d   b y   a n   F I R   l o w p a s s   f i l t e r   w i t h   c u t o f f   f r e q u e n c y   6   k H z .  
   *   T h e   l o w p a s s   f i l t e r   e l i m i n a t e s   t h e   1 5   k H z   s i g n a l   l e a v i n g   o n l y   t h e   1   k H z   s i n e   w a v e   a t   t h e   o u t p u t .  
   *   \ p a r  
   *   T h e   l o w p a s s   f i l t e r   w a s   d e s i g n e d   u s i n g   M A T L A B   w i t h   a   s a m p l e   r a t e   o f   4 8   k H z   a n d  
   *   a   l e n g t h   o f   2 9   p o i n t s .  
   *   T h e   M A T L A B   c o d e   t o   g e n e r a t e   t h e   f i l t e r   c o e f f i c i e n t s   i s   s h o w n   b e l o w :  
   *   < p r e >  
   *           h   =   f i r 1 ( 2 8 ,   6 / 2 4 ) ;  
   *   < / p r e >  
   *   T h e   f i r s t   a r g u m e n t   i s   t h e   " o r d e r "   o f   t h e   f i l t e r   a n d   i s   a l w a y s   o n e   l e s s   t h a n   t h e   d e s i r e d   l e n g t h .  
   *   T h e   s e c o n d   a r g u m e n t   i s   t h e   n o r m a l i z e d   c u t o f f   f r e q u e n c y .     T h i s   i s   i n   t h e   r a n g e   0   ( D C )   t o   1 . 0   ( N y q u i s t ) .  
   *   A   6   k H z   c u t o f f   w i t h   a   N y q u i s t   f r e q u e n c y   o f   2 4   k H z   l i e s   a t   a   n o r m a l i z e d   f r e q u e n c y   o f   6 / 2 4   =   0 . 2 5 .  
   *   T h e   C M S I S   F I R   f i l t e r   f u n c t i o n   r e q u i r e s   t h e   c o e f f i c i e n t s   t o   b e   i n   t i m e   r e v e r s e d   o r d e r .  
   *   < p r e >  
   *           f l i p l r ( h )  
   *   < / p r e >  
   *   T h e   r e s u l t i n g   f i l t e r   c o e f f i c i e n t s   a n d   a r e   s h o w n   b e l o w .  
   *   N o t e   t h a t   t h e   f i l t e r   i s   s y m m e t r i c   ( a   p r o p e r t y   o f   l i n e a r   p h a s e   F I R   f i l t e r s )  
   *   a n d   t h e   p o i n t   o f   s y m m e t r y   i s   s a m p l e   1 4 .     T h u s   t h e   f i l t e r   w i l l   h a v e   a   d e l a y   o f  
   *   1 4   s a m p l e s   f o r   a l l   f r e q u e n c i e s .  
   *   \ p a r  
   *   \ i m a g e   h t m l   F I R L P F _ c o e f f s . g i f  
   *   \ p a r  
   *   T h e   f r e q u e n c y   r e s p o n s e   o f   t h e   f i l t e r   i s   s h o w n   n e x t .  
   *   T h e   p a s s b a n d   g a i n   o f   t h e   f i l t e r   i s   1 . 0   a n d   i t   r e a c h e s   0 . 5   a t   t h e   c u t o f f   f r e q u e n c y   6   k H z .  
   *   \ p a r  
   *   \ i m a g e   h t m l   F I R L P F _ r e s p o n s e . g i f  
   *   \ p a r  
   *   T h e   i n p u t   s i g n a l   i s   s h o w n   b e l o w .  
   *   T h e   l e f t   h a n d   s i d e   s h o w s   t h e   s i g n a l   i n   t h e   t i m e   d o m a i n   w h i l e   t h e   r i g h t   h a n d   s i d e   i s   a   f r e q u e n c y   d o m a i n   r e p r e s e n t a t i o n .  
   *   T h e   t w o   s i n e   w a v e   c o m p o n e n t s   c a n   b e   c l e a r l y   s e e n .  
   *   \ p a r  
   *   \ i m a g e   h t m l   F I R L P F _ i n p u t . g i f  
   *   \ p a r  
   *   T h e   o u t p u t   o f   t h e   f i l t e r   i s   s h o w n   b e l o w .     T h e   1 5   k H z   c o m p o n e n t   h a s   b e e n   e l i m i n a t e d .  
   *   \ p a r  
   *   \ i m a g e   h t m l   F I R L P F _ o u t p u t . g i f  
   *  
   *   \ p a r   V a r i a b l e s   D e s c r i p t i o n :  
   *   \ p a r  
   *   \ l i   \ c   t e s t I n p u t _ f 3 2 _ 1 k H z _ 1 5 k H z   p o i n t s   t o   t h e   i n p u t   d a t a  
   *   \ l i   \ c   r e f O u t p u t   p o i n t s   t o   t h e   r e f e r e n c e   o u t p u t   d a t a  
   *   \ l i   \ c   t e s t O u t p u t   p o i n t s   t o   t h e   t e s t   o u t p u t   d a t a  
   *   \ l i   \ c   f i r S t a t e F 3 2   p o i n t s   t o   s t a t e   b u f f e r  
   *   \ l i   \ c   f i r C o e f f s 3 2   p o i n t s   t o   c o e f f i c i e n t   b u f f e r  
   *   \ l i   \ c   b l o c k S i z e   n u m b e r   o f   s a m p l e s   p r o c e s s e d   a t   a   t i m e  
   *   \ l i   \ c   n u m B l o c k s   n u m b e r   o f   f r a m e s  
   *  
   *   \ p a r   C M S I S   D S P   S o f t w a r e   L i b r a r y   F u n c t i o n s   U s e d :  
   *   \ p a r  
   *   -   a r m _ f i r _ i n i t _ f 3 2 ( )  
   *   -   a r m _ f i r _ f 3 2 ( )  
   *  
   *   < b >   R e f e r     < / b >  
   *   \ l i n k   a r m _ f i r _ e x a m p l e _ f 3 2 . c   \ e n d l i n k  
   *  
   * /  
  
  
 / * *   \ e x a m p l e   a r m _ f i r _ e x a m p l e _ f 3 2 . c  
   * /  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 * *   I n c l u d e   F i l e s  
 * *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 # i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " m a t h _ h e l p e r . h "  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 * *   M a c r o   D e f i n e s  
 * *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 # d e f i n e   T E S T _ L E N G T H _ S A M P L E S     3 2 0  
 # d e f i n e   S N R _ T H R E S H O L D _ F 3 2         1 4 0 . 0 f  
 # d e f i n e   B L O C K _ S I Z E                         3 2  
 # d e f i n e   N U M _ T A P S                             2 9  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   T h e   i n p u t   s i g n a l   a n d   r e f e r e n c e   o u t p u t   ( c o m p u t e d   w i t h   M A T L A B )  
   *   a r e   d e f i n e d   e x t e r n a l l y   i n   a r m _ f i r _ l p f _ d a t a . c .  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 e x t e r n   f l o a t 3 2 _ t   t e s t I n p u t _ f 3 2 _ 1 k H z _ 1 5 k H z [ T E S T _ L E N G T H _ S A M P L E S ] ;  
 e x t e r n   f l o a t 3 2 _ t   r e f O u t p u t [ T E S T _ L E N G T H _ S A M P L E S ] ;  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   D e c l a r e   T e s t   o u t p u t   b u f f e r  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 s t a t i c   f l o a t 3 2 _ t   t e s t O u t p u t [ T E S T _ L E N G T H _ S A M P L E S ] ;  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   D e c l a r e   S t a t e   b u f f e r   o f   s i z e   ( n u m T a p s   +   b l o c k S i z e   -   1 )  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 s t a t i c   f l o a t 3 2 _ t   f i r S t a t e F 3 2 [ B L O C K _ S I Z E   +   N U M _ T A P S   -   1 ] ;  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 * *   F I R   C o e f f i c i e n t s   b u f f e r   g e n e r a t e d   u s i n g   f i r 1 ( )   M A T L A B   f u n c t i o n .  
 * *   f i r 1 ( 2 8 ,   6 / 2 4 )  
 * *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 c o n s t   f l o a t 3 2 _ t   f i r C o e f f s 3 2 [ N U M _ T A P S ]   =   {  
     - 0 . 0 0 1 8 2 2 5 2 3 0 f ,   - 0 . 0 0 1 5 8 7 9 2 9 4 f ,   + 0 . 0 0 0 0 0 0 0 0 0 0 f ,   + 0 . 0 0 3 6 9 7 7 5 0 8 f ,   + 0 . 0 0 8 0 7 5 4 3 0 3 f ,   + 0 . 0 0 8 5 3 0 2 2 1 7 f ,   - 0 . 0 0 0 0 0 0 0 0 0 0 f ,   - 0 . 0 1 7 3 9 7 6 9 8 4 f ,  
     - 0 . 0 3 4 1 4 5 8 6 0 7 f ,   - 0 . 0 3 3 3 5 9 1 5 6 5 f ,   + 0 . 0 0 0 0 0 0 0 0 0 0 f ,   + 0 . 0 6 7 6 3 0 8 3 9 5 f ,   + 0 . 1 5 2 2 0 6 1 8 3 5 f ,   + 0 . 2 2 2 9 2 4 6 9 5 6 f ,   + 0 . 2 5 0 4 9 6 0 9 3 3 f ,   + 0 . 2 2 2 9 2 4 6 9 5 6 f ,  
     + 0 . 1 5 2 2 0 6 1 8 3 5 f ,   + 0 . 0 6 7 6 3 0 8 3 9 5 f ,   + 0 . 0 0 0 0 0 0 0 0 0 0 f ,   - 0 . 0 3 3 3 5 9 1 5 6 5 f ,   - 0 . 0 3 4 1 4 5 8 6 0 7 f ,   - 0 . 0 1 7 3 9 7 6 9 8 4 f ,   - 0 . 0 0 0 0 0 0 0 0 0 0 f ,   + 0 . 0 0 8 5 3 0 2 2 1 7 f ,  
     + 0 . 0 0 8 0 7 5 4 3 0 3 f ,   + 0 . 0 0 3 6 9 7 7 5 0 8 f ,   + 0 . 0 0 0 0 0 0 0 0 0 0 f ,   - 0 . 0 0 1 5 8 7 9 2 9 4 f ,   - 0 . 0 0 1 8 2 2 5 2 3 0 f  
 } ;  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   G l o b a l   v a r i a b l e s   f o r   F I R   L P F   E x a m p l e  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 u i n t 3 2 _ t   b l o c k S i z e   =   B L O C K _ S I Z E ;  
 u i n t 3 2 _ t   n u m B l o c k s   =   T E S T _ L E N G T H _ S A M P L E S / B L O C K _ S I Z E ;  
  
 f l o a t 3 2 _ t     s n r ;  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   F I R   L P F   E x a m p l e  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 i n t 3 2 _ t   m a i n ( v o i d )  
 {  
     u i n t 3 2 _ t   i ;  
     a r m _ f i r _ i n s t a n c e _ f 3 2   S ;  
     a r m _ s t a t u s   s t a t u s ;  
     f l o a t 3 2 _ t     * i n p u t F 3 2 ,   * o u t p u t F 3 2 ;  
  
     / *   I n i t i a l i z e   i n p u t   a n d   o u t p u t   b u f f e r   p o i n t e r s   * /  
     i n p u t F 3 2   =   & t e s t I n p u t _ f 3 2 _ 1 k H z _ 1 5 k H z [ 0 ] ;  
     o u t p u t F 3 2   =   & t e s t O u t p u t [ 0 ] ;  
  
     / *   C a l l   F I R   i n i t   f u n c t i o n   t o   i n i t i a l i z e   t h e   i n s t a n c e   s t r u c t u r e .   * /  
     a r m _ f i r _ i n i t _ f 3 2 ( & S ,   N U M _ T A P S ,   ( f l o a t 3 2 _ t   * ) & f i r C o e f f s 3 2 [ 0 ] ,   & f i r S t a t e F 3 2 [ 0 ] ,   b l o c k S i z e ) ;  
  
     / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
     * *   C a l l   t h e   F I R   p r o c e s s   f u n c t i o n   f o r   e v e r y   b l o c k S i z e   s a m p l e s  
     * *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
     f o r ( i = 0 ;   i   <   n u m B l o c k s ;   i + + )  
     {  
         a r m _ f i r _ f 3 2 ( & S ,   i n p u t F 3 2   +   ( i   *   b l o c k S i z e ) ,   o u t p u t F 3 2   +   ( i   *   b l o c k S i z e ) ,   b l o c k S i z e ) ;  
     }  
  
     / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
     * *   C o m p a r e   t h e   g e n e r a t e d   o u t p u t   a g a i n s t   t h e   r e f e r e n c e   o u t p u t   c o m p u t e d  
     * *   i n   M A T L A B .  
     * *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
     s n r   =   a r m _ s n r _ f 3 2 ( & r e f O u t p u t [ 0 ] ,   & t e s t O u t p u t [ 0 ] ,   T E S T _ L E N G T H _ S A M P L E S ) ;  
  
     i f   ( s n r   <   S N R _ T H R E S H O L D _ F 3 2 )  
     {  
         s t a t u s   =   A R M _ M A T H _ T E S T _ F A I L U R E ;  
     }  
     e l s e  
     {  
         s t a t u s   =   A R M _ M A T H _ S U C C E S S ;  
     }  
  
     / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
     * *   L o o p   h e r e   i f   t h e   s i g n a l   d o e s   n o t   m a t c h   t h e   r e f e r e n c e   o u t p u t .  
     * *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
     i f   (   s t a t u s   ! =   A R M _ M A T H _ S U C C E S S )  
     {  
         w h i l e   ( 1 ) ;  
     }  
  
     w h i l e   ( 1 ) ;                                                           / *   m a i n   f u n c t i o n   d o e s   n o t   r e t u r n   * /  
 }  
  
 / * *   \ e n d l i n k   * /  
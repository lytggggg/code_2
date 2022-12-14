??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 2   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
 *  
 *   $ D a t e :                 1 7 .   J a n u a r y   2 0 1 3  
 *   $ R e v i s i o n :   	 V 1 . 4 . 0     b  
 *  
 *   P r o j e c t :   	         C M S I S   D S P   L i b r a r y  
 *  
 *   T i t l e : 	         m a t h _ h e l p e r . c  
 *  
 *   D e s c r i p t i o n : 	 D e f i n i t i o n   o f   a l l   h e l p e r   f u n c t i o n s   r e q u i r e d .  
 *  
 *   T a r g e t   P r o c e s s o r :   C o r t e x - M 4 / C o r t e x - M 3  
 *  
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
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 * 	 	 I n c l u d e   s t a n d a r d   h e a d e r   f i l e s  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 # i n c l u d e < m a t h . h >  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 * 	 	 I n c l u d e   p r o j e c t   h e a d e r   f i l e s  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 # i n c l u d e   " m a t h _ h e l p e r . h "  
  
 / * *  
   *   @ b r i e f     C a l u c l a t i o n   o f   S N R  
   *   @ p a r a m [ i n ]     p R e f   	 P o i n t e r   t o   t h e   r e f e r e n c e   b u f f e r  
   *   @ p a r a m [ i n ]     p T e s t 	 P o i n t e r   t o   t h e   t e s t   b u f f e r  
   *   @ p a r a m [ i n ]     b u f f S i z e 	 t o t a l   n u m b e r   o f   s a m p l e s  
   *   @ r e t u r n           S N R  
   *   T h e   f u n c t i o n   C a l u c l a t e s   s i g n a l   t o   n o i s e   r a t i o   f o r   t h e   r e f e r e n c e   o u t p u t  
   *   a n d   t e s t   o u t p u t  
   * /  
  
 f l o a t   a r m _ s n r _ f 3 2 ( f l o a t   * p R e f ,   f l o a t   * p T e s t ,   u i n t 3 2 _ t   b u f f S i z e )  
 {  
     f l o a t   E n e r g y S i g n a l   =   0 . 0 ,   E n e r g y E r r o r   =   0 . 0 ;  
     u i n t 3 2 _ t   i ;  
     f l o a t   S N R ;  
     i n t   t e m p ;  
     i n t   * t e s t ;  
  
     f o r   ( i   =   0 ;   i   <   b u f f S i z e ;   i + + )  
         {  
   	     / *   C h e c k i n g   f o r   a   N A N   v a l u e   i n   p R e f   a r r a y   * /  
 	     t e s t   =       ( i n t   * ) ( & p R e f [ i ] ) ;  
             t e m p   =     * t e s t ;  
  
 	     i f   ( t e m p   = =   0 x 7 F C 0 0 0 0 0 )  
 	     {  
 	     	 	 r e t u r n ( 0 ) ;  
 	     }  
  
 	     / *   C h e c k i n g   f o r   a   N A N   v a l u e   i n   p T e s t   a r r a y   * /  
 	     t e s t   =       ( i n t   * ) ( & p T e s t [ i ] ) ;  
             t e m p   =     * t e s t ;  
  
 	     i f   ( t e m p   = =   0 x 7 F C 0 0 0 0 0 )  
 	     {  
 	     	 	 r e t u r n ( 0 ) ;  
 	     }  
             E n e r g y S i g n a l   + =   p R e f [ i ]   *   p R e f [ i ] ;  
             E n e r g y E r r o r   + =   ( p R e f [ i ]   -   p T e s t [ i ] )   *   ( p R e f [ i ]   -   p T e s t [ i ] ) ;  
         }  
  
 	 / *   C h e c k i n g   f o r   a   N A N   v a l u e   i n   E n e r g y E r r o r   * /  
 	 t e s t   =       ( i n t   * ) ( & E n e r g y E r r o r ) ;  
         t e m p   =     * t e s t ;  
  
         i f   ( t e m p   = =   0 x 7 F C 0 0 0 0 0 )  
         {  
     	 	 r e t u r n ( 0 ) ;  
         }  
  
  
     S N R   =   1 0   *   l o g 1 0   ( E n e r g y S i g n a l   /   E n e r g y E r r o r ) ;  
  
     r e t u r n   ( S N R ) ;  
  
 }  
  
  
 / * *  
   *   @ b r i e f     P r o v i d e   g u a r d   b i t s   f o r   I n p u t   b u f f e r  
   *   @ p a r a m [ i n , o u t ]     i n p u t _ b u f       P o i n t e r   t o   i n p u t   b u f f e r  
   *   @ p a r a m [ i n ]               b l o c k S i z e     b l o c k   S i z e  
   *   @ p a r a m [ i n ]               g u a r d _ b i t s   g u a r d   b i t s  
   *   @ r e t u r n   n o n e  
   *   T h e   f u n c t i o n   P r o v i d e s   t h e   g u a r d   b i t s   f o r   t h e   b u f f e r  
   *   t o   a v o i d   o v e r f l o w  
   * /  
  
 v o i d   a r m _ p r o v i d e _ g u a r d _ b i t s _ q 1 5   ( q 1 5 _ t   *   i n p u t _ b u f ,   u i n t 3 2 _ t   b l o c k S i z e ,  
                                                         u i n t 3 2 _ t   g u a r d _ b i t s )  
 {  
     u i n t 3 2 _ t   i ;  
  
     f o r   ( i   =   0 ;   i   <   b l o c k S i z e ;   i + + )  
         {  
             i n p u t _ b u f [ i ]   =   i n p u t _ b u f [ i ]   > >   g u a r d _ b i t s ;  
         }  
 }  
  
 / * *  
   *   @ b r i e f     C o n v e r t s   f l o a t   t o   f i x e d   i n   q 1 2 . 2 0   f o r m a t  
   *   @ p a r a m [ i n ]     p I n                   p o i n t e r   t o   i n p u t   b u f f e r  
   *   @ p a r a m [ o u t ]   p O u t                 p o i n t e r   t o   o u t p u t b u f f e r  
   *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   s a m p l e s   i n   t h e   i n p u t   b u f f e r  
   *   @ r e t u r n   n o n e  
   *   T h e   f u n c t i o n   c o n v e r t s   f l o a t i n g   p o i n t   v a l u e s   t o   f i x e d   p o i n t ( q 1 2 . 2 0 )   v a l u e s  
   * /  
  
 v o i d   a r m _ f l o a t _ t o _ q 1 2 _ 2 0 ( f l o a t   * p I n ,   q 3 1 _ t   *   p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s )  
 {  
     u i n t 3 2 _ t   i ;  
  
     f o r   ( i   =   0 ;   i   <   n u m S a m p l e s ;   i + + )  
         {  
 	     / *   1 0 4 8 5 7 6 . 0 f   c o r r e s p o n d s   t o   p o w ( 2 ,   2 0 )   * /  
             p O u t [ i ]   =   ( q 3 1 _ t )   ( p I n [ i ]   *   1 0 4 8 5 7 6 . 0 f ) ;  
  
             p O u t [ i ]   + =   p I n [ i ]   >   0   ?   0 . 5   :   - 0 . 5 ;  
  
             i f   ( p I n [ i ]   = =   ( f l o a t )   1 . 0 )  
                 {  
                     p O u t [ i ]   =   0 x 0 0 0 F F F F F ;  
                 }  
         }  
 }  
  
 / * *  
   *   @ b r i e f     C o m p a r e   M A T L A B   R e f e r e n c e   O u t p u t   a n d   A R M   T e s t   o u t p u t  
   *   @ p a r a m [ i n ]     p I n                   P o i n t e r   t o   R e f   b u f f e r  
   *   @ p a r a m [ i n ]     p O u t                 P o i n t e r   t o   T e s t   b u f f e r  
   *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   s a m p l e s   i n   t h e   b u f f e r  
   *   @ r e t u r n   m a x i m u m   d i f f e r e n c e  
   * /  
  
 u i n t 3 2 _ t   a r m _ c o m p a r e _ f i x e d _ q 1 5 ( q 1 5 _ t   * p I n ,   q 1 5 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s )  
 {  
     u i n t 3 2 _ t   i ;  
     i n t 3 2 _ t   d i f f ,   d i f f C r n t   =   0 ;  
     u i n t 3 2 _ t   m a x D i f f   =   0 ;  
  
     f o r   ( i   =   0 ;   i   <   n u m S a m p l e s ;   i + + )  
     {  
     	 d i f f   =   p I n [ i ]   -   p O u t [ i ] ;  
     	 d i f f C r n t   =   ( d i f f   >   0 )   ?   d i f f   :   - d i f f ;  
  
 	 i f   ( d i f f C r n t   >   m a x D i f f )  
 	 {  
 	 	 m a x D i f f   =   d i f f C r n t ;  
 	 }  
     }  
  
     r e t u r n ( m a x D i f f ) ;  
 }  
  
 / * *  
   *   @ b r i e f     C o m p a r e   M A T L A B   R e f e r e n c e   O u t p u t   a n d   A R M   T e s t   o u t p u t  
   *   @ p a r a m [ i n ]     p I n                   P o i n t e r   t o   R e f   b u f f e r  
   *   @ p a r a m [ i n ]     p O u t                 P o i n t e r   t o   T e s t   b u f f e r  
   *   @ p a r a m [ i n ]     n u m S a m p l e s   n u m b e r   o f   s a m p l e s   i n   t h e   b u f f e r  
   *   @ r e t u r n   m a x i m u m   d i f f e r e n c e  
   * /  
  
 u i n t 3 2 _ t   a r m _ c o m p a r e _ f i x e d _ q 3 1 ( q 3 1 _ t   * p I n ,   q 3 1 _ t   *   p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s )  
 {  
     u i n t 3 2 _ t   i ;  
     i n t 3 2 _ t   d i f f ,   d i f f C r n t   =   0 ;  
     u i n t 3 2 _ t   m a x D i f f   =   0 ;  
  
     f o r   ( i   =   0 ;   i   <   n u m S a m p l e s ;   i + + )  
     {  
     	 d i f f   =   p I n [ i ]   -   p O u t [ i ] ;  
     	 d i f f C r n t   =   ( d i f f   >   0 )   ?   d i f f   :   - d i f f ;  
  
 	 i f   ( d i f f C r n t   >   m a x D i f f )  
 	 {  
 	 	 m a x D i f f   =   d i f f C r n t ;  
 	 }  
     }  
  
     r e t u r n ( m a x D i f f ) ;  
 }  
  
 / * *  
   *   @ b r i e f     P r o v i d e   g u a r d   b i t s   f o r   I n p u t   b u f f e r  
   *   @ p a r a m [ i n , o u t ]     i n p u t _ b u f       P o i n t e r   t o   i n p u t   b u f f e r  
   *   @ p a r a m [ i n ]               b l o c k S i z e     b l o c k   S i z e  
   *   @ p a r a m [ i n ]               g u a r d _ b i t s   g u a r d   b i t s  
   *   @ r e t u r n   n o n e  
   *   T h e   f u n c t i o n   P r o v i d e s   t h e   g u a r d   b i t s   f o r   t h e   b u f f e r  
   *   t o   a v o i d   o v e r f l o w  
   * /  
  
 v o i d   a r m _ p r o v i d e _ g u a r d _ b i t s _ q 3 1   ( q 3 1 _ t   *   i n p u t _ b u f ,  
 	 	 	 	 	 	 	 	   u i n t 3 2 _ t   b l o c k S i z e ,  
                                                                   u i n t 3 2 _ t   g u a r d _ b i t s )  
 {  
     u i n t 3 2 _ t   i ;  
  
     f o r   ( i   =   0 ;   i   <   b l o c k S i z e ;   i + + )  
         {  
             i n p u t _ b u f [ i ]   =   i n p u t _ b u f [ i ]   > >   g u a r d _ b i t s ;  
         }  
 }  
  
 / * *  
   *   @ b r i e f     P r o v i d e   g u a r d   b i t s   f o r   I n p u t   b u f f e r  
   *   @ p a r a m [ i n , o u t ]     i n p u t _ b u f       P o i n t e r   t o   i n p u t   b u f f e r  
   *   @ p a r a m [ i n ]               b l o c k S i z e     b l o c k   S i z e  
   *   @ p a r a m [ i n ]               g u a r d _ b i t s   g u a r d   b i t s  
   *   @ r e t u r n   n o n e  
   *   T h e   f u n c t i o n   P r o v i d e s   t h e   g u a r d   b i t s   f o r   t h e   b u f f e r  
   *   t o   a v o i d   o v e r f l o w  
   * /  
  
 v o i d   a r m _ p r o v i d e _ g u a r d _ b i t s _ q 7   ( q 7 _ t   *   i n p u t _ b u f ,  
 	 	 	 	 	 	 	 	 u i n t 3 2 _ t   b l o c k S i z e ,  
                                                                 u i n t 3 2 _ t   g u a r d _ b i t s )  
 {  
     u i n t 3 2 _ t   i ;  
  
     f o r   ( i   =   0 ;   i   <   b l o c k S i z e ;   i + + )  
         {  
             i n p u t _ b u f [ i ]   =   i n p u t _ b u f [ i ]   > >   g u a r d _ b i t s ;  
         }  
 }  
  
  
  
 / * *  
   *   @ b r i e f     C a l u c l a t e s   n u m b e r   o f   g u a r d   b i t s  
   *   @ p a r a m [ i n ]     n u m _ a d d s   	 n u m b e r   o f   a d d i t i o n s  
   *   @ r e t u r n   g u a r d   b i t s  
   *   T h e   f u n c t i o n   C a l u c l a t e s   t h e   n u m b e r   o f   g u a r d   b i t s  
   *   d e p e n d i n g   o n   t h e   n u m t a p s  
   * /  
  
 u i n t 3 2 _ t   a r m _ c a l c _ g u a r d _ b i t s   ( u i n t 3 2 _ t   n u m _ a d d s )  
 {  
     u i n t 3 2 _ t   i   =   1 ,   j   =   0 ;  
  
     i f   ( n u m _ a d d s   = =   1 )  
         {  
             r e t u r n   ( 0 ) ;  
         }  
  
     w h i l e   ( i   <   n u m _ a d d s )  
         {  
             i   =   i   *   2 ;  
             j + + ;  
         }  
  
     r e t u r n   ( j ) ;  
 }  
  
 / * *  
   *   @ b r i e f     A p p l y   g u a r d   b i t s   t o   b u f f e r  
   *   @ p a r a m [ i n , o u t ]     p I n                   p o i n t e r   t o   i n p u t   b u f f e r  
   *   @ p a r a m [ i n ]             n u m S a m p l e s     n u m b e r   o f   s a m p l e s   i n   t h e   i n p u t   b u f f e r  
   *   @ p a r a m [ i n ]             g u a r d _ b i t s     g u a r d   b i t s  
   *   @ r e t u r n   n o n e  
   * /  
  
 v o i d   a r m _ a p p l y _ g u a r d _ b i t s   ( f l o a t 3 2 _ t   * p I n ,  
 	 	 	 	 	 	       u i n t 3 2 _ t   n u m S a m p l e s ,  
 	 	 	 	 	 	       u i n t 3 2 _ t   g u a r d _ b i t s )  
 {  
     u i n t 3 2 _ t   i ;  
  
     f o r   ( i   =   0 ;   i   <   n u m S a m p l e s ;   i + + )  
         {  
             p I n [ i ]   =   p I n [ i ]   *   a r m _ c a l c _ 2 p o w ( g u a r d _ b i t s ) ;  
         }  
 }  
  
 / * *  
   *   @ b r i e f     C a l c u l a t e s   p o w ( 2 ,   n u m S h i f t s )  
   *   @ p a r a m [ i n ]     n u m S h i f t s   	 n u m b e r   o f   s h i f t s  
   *   @ r e t u r n   p o w ( 2 ,   n u m S h i f t s )  
   * /  
 u i n t 3 2 _ t   a r m _ c a l c _ 2 p o w ( u i n t 3 2 _ t   n u m S h i f t s )  
 {  
  
     u i n t 3 2 _ t   i ,   v a l   =   1 ;  
  
     f o r   ( i   =   0 ;   i   <   n u m S h i f t s ;   i + + )  
         {  
             v a l   =   v a l   *   2 ;  
         }  
  
     r e t u r n ( v a l ) ;  
 }  
  
  
  
 / * *  
   *   @ b r i e f     C o n v e r t s   f l o a t   t o   f i x e d   q 1 4  
   *   @ p a r a m [ i n ]     p I n                   p o i n t e r   t o   i n p u t   b u f f e r  
   *   @ p a r a m [ o u t ]   p O u t                 p o i n t e r   t o   o u t p u t   b u f f e r  
   *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   s a m p l e s   i n   t h e   b u f f e r  
   *   @ r e t u r n   n o n e  
   *   T h e   f u n c t i o n   c o n v e r t s   f l o a t i n g   p o i n t   v a l u e s   t o   f i x e d   p o i n t   v a l u e s  
   * /  
  
 v o i d   a r m _ f l o a t _ t o _ q 1 4   ( f l o a t   * p I n ,   q 1 5 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s )  
 {  
     u i n t 3 2 _ t   i ;  
  
     f o r   ( i   =   0 ;   i   <   n u m S a m p l e s ;   i + + )  
         {  
 	     / *   1 6 3 8 4 . 0 f   c o r r e s p o n d s   t o   p o w ( 2 ,   1 4 )   * /  
             p O u t [ i ]   =   ( q 1 5 _ t )   ( p I n [ i ]   *   1 6 3 8 4 . 0 f ) ;  
  
             p O u t [ i ]   + =   p I n [ i ]   >   0   ?   0 . 5   :   - 0 . 5 ;  
  
             i f   ( p I n [ i ]   = =   ( f l o a t )   2 . 0 )  
                 {  
                     p O u t [ i ]   =   0 x 7 F F F ;  
                 }  
  
         }  
  
 }  
  
  
 / * *  
   *   @ b r i e f     C o n v e r t s   f l o a t   t o   f i x e d   q 3 0   f o r m a t  
   *   @ p a r a m [ i n ]     p I n                   p o i n t e r   t o   i n p u t   b u f f e r  
   *   @ p a r a m [ o u t ]   p O u t                 p o i n t e r   t o   o u t p u t   b u f f e r  
   *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   s a m p l e s   i n   t h e   b u f f e r  
   *   @ r e t u r n   n o n e  
   *   T h e   f u n c t i o n   c o n v e r t s   f l o a t i n g   p o i n t   v a l u e s   t o   f i x e d   p o i n t   v a l u e s  
   * /  
  
 v o i d   a r m _ f l o a t _ t o _ q 3 0   ( f l o a t   * p I n ,   q 3 1 _ t   *   p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s )  
 {  
     u i n t 3 2 _ t   i ;  
  
     f o r   ( i   =   0 ;   i   <   n u m S a m p l e s ;   i + + )  
         {  
 	     / *   1 0 7 3 7 4 1 8 2 4 . 0 f   c o r r e s p o n d s   t o   p o w ( 2 ,   3 0 )   * /  
             p O u t [ i ]   =   ( q 3 1 _ t )   ( p I n [ i ]   *   1 0 7 3 7 4 1 8 2 4 . 0 f ) ;  
  
             p O u t [ i ]   + =   p I n [ i ]   >   0   ?   0 . 5   :   - 0 . 5 ;  
  
             i f   ( p I n [ i ]   = =   ( f l o a t )   2 . 0 )  
                 {  
                     p O u t [ i ]   =   0 x 7 F F F F F F F ;  
                 }  
         }  
 }  
  
 / * *  
   *   @ b r i e f     C o n v e r t s   f l o a t   t o   f i x e d   q 3 0   f o r m a t  
   *   @ p a r a m [ i n ]     p I n                   p o i n t e r   t o   i n p u t   b u f f e r  
   *   @ p a r a m [ o u t ]   p O u t                 p o i n t e r   t o   o u t p u t   b u f f e r  
   *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   s a m p l e s   i n   t h e   b u f f e r  
   *   @ r e t u r n   n o n e  
   *   T h e   f u n c t i o n   c o n v e r t s   f l o a t i n g   p o i n t   v a l u e s   t o   f i x e d   p o i n t   v a l u e s  
   * /  
  
 v o i d   a r m _ f l o a t _ t o _ q 2 9   ( f l o a t   * p I n ,   q 3 1 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s )  
 {  
     u i n t 3 2 _ t   i ;  
  
     f o r   ( i   =   0 ;   i   <   n u m S a m p l e s ;   i + + )  
         {  
 	     / *   1 0 7 3 7 4 1 8 2 4 . 0 f   c o r r e s p o n d s   t o   p o w ( 2 ,   3 0 )   * /  
             p O u t [ i ]   =   ( q 3 1 _ t )   ( p I n [ i ]   *   5 3 6 8 7 0 9 1 2 . 0 f ) ;  
  
             p O u t [ i ]   + =   p I n [ i ]   >   0   ?   0 . 5   :   - 0 . 5 ;  
  
             i f   ( p I n [ i ]   = =   ( f l o a t )   4 . 0 )  
                 {  
                     p O u t [ i ]   =   0 x 7 F F F F F F F ;  
                 }  
         }  
 }  
  
  
 / * *  
   *   @ b r i e f     C o n v e r t s   f l o a t   t o   f i x e d   q 2 8   f o r m a t  
   *   @ p a r a m [ i n ]     p I n                   p o i n t e r   t o   i n p u t   b u f f e r  
   *   @ p a r a m [ o u t ]   p O u t                 p o i n t e r   t o   o u t p u t   b u f f e r  
   *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   s a m p l e s   i n   t h e   b u f f e r  
   *   @ r e t u r n   n o n e  
   *   T h e   f u n c t i o n   c o n v e r t s   f l o a t i n g   p o i n t   v a l u e s   t o   f i x e d   p o i n t   v a l u e s  
   * /  
  
 v o i d   a r m _ f l o a t _ t o _ q 2 8   ( f l o a t   * p I n ,   q 3 1 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s )  
 {  
     u i n t 3 2 _ t   i ;  
  
     f o r   ( i   =   0 ;   i   <   n u m S a m p l e s ;   i + + )  
         {  
 	 / *   2 6 8 4 3 5 4 5 6 . 0 f   c o r r e s p o n d s   t o   p o w ( 2 ,   2 8 )   * /  
             p O u t [ i ]   =   ( q 3 1 _ t )   ( p I n [ i ]   *   2 6 8 4 3 5 4 5 6 . 0 f ) ;  
  
             p O u t [ i ]   + =   p I n [ i ]   >   0   ?   0 . 5   :   - 0 . 5 ;  
  
             i f   ( p I n [ i ]   = =   ( f l o a t )   8 . 0 )  
                 {  
                     p O u t [ i ]   =   0 x 7 F F F F F F F ;  
                 }  
         }  
 }  
  
 / * *  
   *   @ b r i e f     C l i p   t h e   f l o a t   v a l u e s   t o   + / -   1  
   *   @ p a r a m [ i n , o u t ]     p I n                       i n p u t   b u f f e r  
   *   @ p a r a m [ i n ]             n u m S a m p l e s         n u m b e r   o f   s a m p l e s   i n   t h e   b u f f e r  
   *   @ r e t u r n   n o n e  
   *   T h e   f u n c t i o n   c o n v e r t s   f l o a t i n g   p o i n t   v a l u e s   t o   f i x e d   p o i n t   v a l u e s  
   * /  
  
 v o i d   a r m _ c l i p _ f 3 2   ( f l o a t   * p I n ,   u i n t 3 2 _ t   n u m S a m p l e s )  
 {  
     u i n t 3 2 _ t   i ;  
  
     f o r   ( i   =   0 ;   i   <   n u m S a m p l e s ;   i + + )  
         {  
             i f   ( p I n [ i ]   >   1 . 0 f )  
 	     {  
 	         p I n [ i ]   =   1 . 0 ;  
 	     }  
 	     e l s e   i f   (   p I n [ i ]   <   - 1 . 0 f )  
 	     {  
 	         p I n [ i ]   =   - 1 . 0 ;  
 	     }  
  
         }  
 }  
  
  
  
  
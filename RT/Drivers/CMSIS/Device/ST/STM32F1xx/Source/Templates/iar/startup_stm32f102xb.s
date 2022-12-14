??; * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   2 0 1 7   S T M i c r o e l e c t r o n i c s   * * * * * * * * * * * * * * * * * * * *  
 ; *   F i l e   N a m e                     :   s t a r t u p _ s t m 3 2 f 1 0 2 x b . s  
 ; *   A u t h o r                           :   M C D   A p p l i c a t i o n   T e a m  
 ; *   D e s c r i p t i o n                 :   S T M 3 2 F 1 0 2 x B   U S B   L i n e   D e v i c e s   v e c t o r   t a b l e   f o r    
 ; *                                             E W A R M   t o o l c h a i n .  
 ; *                                             T h i s   m o d u l e   p e r f o r m s :  
 ; *                                             -   S e t   t h e   i n i t i a l   S P  
 ; *                                             -   C o n f i g u r e   t h e   c l o c k   s y s t e m  
 ; *                                             -   S e t   t h e   i n i t i a l   P C   = =   _ _ i a r _ p r o g r a m _ s t a r t ,  
 ; *                                             -   S e t   t h e   v e c t o r   t a b l e   e n t r i e s   w i t h   t h e   e x c e p t i o n s   I S R    
 ; *                                                 a d d r e s s .  
 ; *                                             A f t e r   R e s e t   t h e   C o r t e x - M 3   p r o c e s s o r   i s   i n   T h r e a d   m o d e ,  
 ; *                                             p r i o r i t y   i s   P r i v i l e g e d ,   a n d   t h e   S t a c k   i s   s e t   t o   M a i n .  
 ; * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
 ; *   @ a t t e n t i o n  
 ; *  
 ; *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 7   S T M i c r o e l e c t r o n i c s .  
 ; *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
 ; *  
 ; *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
 ; *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
 ; *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
 ; *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
 ; *  
 ; * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
 ;  
 ;  
 ;   T h e   m o d u l e s   i n   t h i s   f i l e   a r e   i n c l u d e d   i n   t h e   l i b r a r i e s ,   a n d   m a y   b e   r e p l a c e d  
 ;   b y   a n y   u s e r - d e f i n e d   m o d u l e s   t h a t   d e f i n e   t h e   P U B L I C   s y m b o l   _ p r o g r a m _ s t a r t   o r  
 ;   a   u s e r   d e f i n e d   s t a r t   s y m b o l .  
 ;   T o   o v e r r i d e   t h e   c s t a r t u p   d e f i n e d   i n   t h e   l i b r a r y ,   s i m p l y   a d d   y o u r   m o d i f i e d  
 ;   v e r s i o n   t o   t h e   w o r k b e n c h   p r o j e c t .  
 ;  
 ;   T h e   v e c t o r   t a b l e   i s   n o r m a l l y   l o c a t e d   a t   a d d r e s s   0 .  
 ;   W h e n   d e b u g g i n g   i n   R A M ,   i t   c a n   b e   l o c a t e d   i n   R A M ,   a l i g n e d   t o   a t   l e a s t   2 ^ 6 .  
 ;   T h e   n a m e   " _ _ v e c t o r _ t a b l e "   h a s   s p e c i a l   m e a n i n g   f o r   C - S P Y :  
 ;   i t   i s   w h e r e   t h e   S P   s t a r t   v a l u e   i s   f o u n d ,   a n d   t h e   N V I C   v e c t o r  
 ;   t a b l e   r e g i s t e r   ( V T O R )   i s   i n i t i a l i z e d   t o   t h i s   a d d r e s s   i f   ! =   0 .  
 ;  
 ;   C o r t e x - M   v e r s i o n  
 ;  
  
                 M O D U L E     ? c s t a r t u p  
  
                 ; ;   F o r w a r d   d e c l a r a t i o n   o f   s e c t i o n s .  
                 S E C T I O N   C S T A C K : D A T A : N O R O O T ( 3 )  
  
                 S E C T I O N   . i n t v e c : C O D E : N O R O O T ( 2 )  
  
                 E X T E R N     _ _ i a r _ p r o g r a m _ s t a r t  
                 E X T E R N     S y s t e m I n i t                  
                 P U B L I C     _ _ v e c t o r _ t a b l e  
  
                 D A T A  
 _ _ v e c t o r _ t a b l e  
                 D C D           s f e ( C S T A C K )  
                 D C D           R e s e t _ H a n d l e r                           ;   R e s e t   H a n d l e r  
                 D C D           N M I _ H a n d l e r                               ;   N M I   H a n d l e r  
                 D C D           H a r d F a u l t _ H a n d l e r                   ;   H a r d   F a u l t   H a n d l e r  
                 D C D           M e m M a n a g e _ H a n d l e r                   ;   M P U   F a u l t   H a n d l e r  
                 D C D           B u s F a u l t _ H a n d l e r                     ;   B u s   F a u l t   H a n d l e r  
                 D C D           U s a g e F a u l t _ H a n d l e r                 ;   U s a g e   F a u l t   H a n d l e r  
                 D C D           0                                                   ;   R e s e r v e d  
                 D C D           0                                                   ;   R e s e r v e d  
                 D C D           0                                                   ;   R e s e r v e d  
                 D C D           0                                                   ;   R e s e r v e d  
                 D C D           S V C _ H a n d l e r                               ;   S V C a l l   H a n d l e r  
                 D C D           D e b u g M o n _ H a n d l e r                     ;   D e b u g   M o n i t o r   H a n d l e r  
                 D C D           0                                                   ;   R e s e r v e d  
                 D C D           P e n d S V _ H a n d l e r                         ;   P e n d S V   H a n d l e r  
                 D C D           S y s T i c k _ H a n d l e r                       ;   S y s T i c k   H a n d l e r  
  
                   ;   E x t e r n a l   I n t e r r u p t s  
                 D C D           W W D G _ I R Q H a n d l e r                       ;   W i n d o w   W a t c h d o g  
                 D C D           P V D _ I R Q H a n d l e r                         ;   P V D   t h r o u g h   E X T I   L i n e   d e t e c t  
                 D C D           T A M P E R _ I R Q H a n d l e r                   ;   T a m p e r  
                 D C D           R T C _ I R Q H a n d l e r                         ;   R T C  
                 D C D           F L A S H _ I R Q H a n d l e r                     ;   F l a s h  
                 D C D           R C C _ I R Q H a n d l e r                         ;   R C C  
                 D C D           E X T I 0 _ I R Q H a n d l e r                     ;   E X T I   L i n e   0  
                 D C D           E X T I 1 _ I R Q H a n d l e r                     ;   E X T I   L i n e   1  
                 D C D           E X T I 2 _ I R Q H a n d l e r                     ;   E X T I   L i n e   2  
                 D C D           E X T I 3 _ I R Q H a n d l e r                     ;   E X T I   L i n e   3  
                 D C D           E X T I 4 _ I R Q H a n d l e r                     ;   E X T I   L i n e   4  
                 D C D           D M A 1 _ C h a n n e l 1 _ I R Q H a n d l e r     ;   D M A 1   C h a n n e l   1  
                 D C D           D M A 1 _ C h a n n e l 2 _ I R Q H a n d l e r     ;   D M A 1   C h a n n e l   2  
                 D C D           D M A 1 _ C h a n n e l 3 _ I R Q H a n d l e r     ;   D M A 1   C h a n n e l   3  
                 D C D           D M A 1 _ C h a n n e l 4 _ I R Q H a n d l e r     ;   D M A 1   C h a n n e l   4  
                 D C D           D M A 1 _ C h a n n e l 5 _ I R Q H a n d l e r     ;   D M A 1   C h a n n e l   5  
                 D C D           D M A 1 _ C h a n n e l 6 _ I R Q H a n d l e r     ;   D M A 1   C h a n n e l   6  
                 D C D           D M A 1 _ C h a n n e l 7 _ I R Q H a n d l e r     ;   D M A 1   C h a n n e l   7  
                 D C D           A D C 1 _ I R Q H a n d l e r                       ;   A D C 1  
                 D C D           U S B _ H P _ I R Q H a n d l e r     	             ;   U S B   H i g h   P r i o r i t y  
                 D C D           U S B _ L P _ I R Q H a n d l e r                   ;   U S B   L o w     P r i o r i t y  
                 D C D           0                                                   ;   R e s e r v e d  
                 D C D           0                                                   ;   R e s e r v e d  
                 D C D           E X T I 9 _ 5 _ I R Q H a n d l e r                 ;   E X T I   L i n e   9 . . 5  
                 D C D           0                                                   ;   R e s e r v e d  
                 D C D           0                                                   ;   R e s e r v e d  
                 D C D           0                                                   ;   R e s e r v e d  
                 D C D           0                                                   ;   R e s e r v e d  
                 D C D           T I M 2 _ I R Q H a n d l e r                       ;   T I M 2  
                 D C D           T I M 3 _ I R Q H a n d l e r                       ;   T I M 3  
                 D C D           T I M 4 _ I R Q H a n d l e r                       ;   T I M 4  
                 D C D           I 2 C 1 _ E V _ I R Q H a n d l e r                 ;   I 2 C 1   E v e n t  
                 D C D           I 2 C 1 _ E R _ I R Q H a n d l e r                 ;   I 2 C 1   E r r o r  
                 D C D           I 2 C 2 _ E V _ I R Q H a n d l e r                 ;   I 2 C 2   E v e n t  
                 D C D           I 2 C 2 _ E R _ I R Q H a n d l e r                 ;   I 2 C 2   E r r o r  
                 D C D           S P I 1 _ I R Q H a n d l e r                       ;   S P I 1  
                 D C D           S P I 2 _ I R Q H a n d l e r                       ;   S P I 2  
                 D C D           U S A R T 1 _ I R Q H a n d l e r                   ;   U S A R T 1  
                 D C D           U S A R T 2 _ I R Q H a n d l e r                   ;   U S A R T 2  
                 D C D           U S A R T 3 _ I R Q H a n d l e r                   ;   U S A R T 3  
                 D C D           E X T I 1 5 _ 1 0 _ I R Q H a n d l e r             ;   E X T I   L i n e   1 5 . . 1 0  
                 D C D           R T C _ A l a r m _ I R Q H a n d l e r               ;   R T C   A l a r m   t h r o u g h   E X T I   L i n e  
                 D C D           U S B W a k e U p _ I R Q H a n d l e r             ;   U S B   W a k e u p   f r o m   s u s p e n d  
  
 ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ;  
 ; ;  
 ; ;   D e f a u l t   i n t e r r u p t   h a n d l e r s .  
 ; ;  
                 T H U M B  
  
                 P U B W E A K   R e s e t _ H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 2 )  
 R e s e t _ H a n d l e r  
                 L D R           R 0 ,   = S y s t e m I n i t  
                 B L X           R 0  
                 L D R           R 0 ,   = _ _ i a r _ p r o g r a m _ s t a r t  
                 B X             R 0  
                  
                 P U B W E A K   N M I _ H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 N M I _ H a n d l e r  
                 B   N M I _ H a n d l e r  
  
                 P U B W E A K   H a r d F a u l t _ H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 H a r d F a u l t _ H a n d l e r  
                 B   H a r d F a u l t _ H a n d l e r  
  
                 P U B W E A K   M e m M a n a g e _ H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 M e m M a n a g e _ H a n d l e r  
                 B   M e m M a n a g e _ H a n d l e r  
  
                 P U B W E A K   B u s F a u l t _ H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 B u s F a u l t _ H a n d l e r  
                 B   B u s F a u l t _ H a n d l e r  
  
                 P U B W E A K   U s a g e F a u l t _ H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 U s a g e F a u l t _ H a n d l e r  
                 B   U s a g e F a u l t _ H a n d l e r  
  
                 P U B W E A K   S V C _ H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 S V C _ H a n d l e r  
                 B   S V C _ H a n d l e r  
  
                 P U B W E A K   D e b u g M o n _ H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 D e b u g M o n _ H a n d l e r  
                 B   D e b u g M o n _ H a n d l e r  
  
                 P U B W E A K   P e n d S V _ H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 P e n d S V _ H a n d l e r  
                 B   P e n d S V _ H a n d l e r  
  
                 P U B W E A K   S y s T i c k _ H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 S y s T i c k _ H a n d l e r  
                 B   S y s T i c k _ H a n d l e r  
  
                 P U B W E A K   W W D G _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 W W D G _ I R Q H a n d l e r  
                 B   W W D G _ I R Q H a n d l e r  
  
                 P U B W E A K   P V D _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 P V D _ I R Q H a n d l e r  
                 B   P V D _ I R Q H a n d l e r  
  
                 P U B W E A K   T A M P E R _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 T A M P E R _ I R Q H a n d l e r  
                 B   T A M P E R _ I R Q H a n d l e r  
  
                 P U B W E A K   R T C _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 R T C _ I R Q H a n d l e r  
                 B   R T C _ I R Q H a n d l e r  
  
                 P U B W E A K   F L A S H _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 F L A S H _ I R Q H a n d l e r  
                 B   F L A S H _ I R Q H a n d l e r  
  
                 P U B W E A K   R C C _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 R C C _ I R Q H a n d l e r  
                 B   R C C _ I R Q H a n d l e r  
  
                 P U B W E A K   E X T I 0 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 E X T I 0 _ I R Q H a n d l e r  
                 B   E X T I 0 _ I R Q H a n d l e r  
  
                 P U B W E A K   E X T I 1 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 E X T I 1 _ I R Q H a n d l e r  
                 B   E X T I 1 _ I R Q H a n d l e r  
  
                 P U B W E A K   E X T I 2 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 E X T I 2 _ I R Q H a n d l e r  
                 B   E X T I 2 _ I R Q H a n d l e r  
  
                 P U B W E A K   E X T I 3 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 E X T I 3 _ I R Q H a n d l e r  
                 B   E X T I 3 _ I R Q H a n d l e r  
  
                 P U B W E A K   E X T I 4 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 E X T I 4 _ I R Q H a n d l e r  
                 B   E X T I 4 _ I R Q H a n d l e r  
  
                 P U B W E A K   D M A 1 _ C h a n n e l 1 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 D M A 1 _ C h a n n e l 1 _ I R Q H a n d l e r  
                 B   D M A 1 _ C h a n n e l 1 _ I R Q H a n d l e r  
  
                 P U B W E A K   D M A 1 _ C h a n n e l 2 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 D M A 1 _ C h a n n e l 2 _ I R Q H a n d l e r  
                 B   D M A 1 _ C h a n n e l 2 _ I R Q H a n d l e r  
  
                 P U B W E A K   D M A 1 _ C h a n n e l 3 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 D M A 1 _ C h a n n e l 3 _ I R Q H a n d l e r  
                 B   D M A 1 _ C h a n n e l 3 _ I R Q H a n d l e r  
  
                 P U B W E A K   D M A 1 _ C h a n n e l 4 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 D M A 1 _ C h a n n e l 4 _ I R Q H a n d l e r  
                 B   D M A 1 _ C h a n n e l 4 _ I R Q H a n d l e r  
  
                 P U B W E A K   D M A 1 _ C h a n n e l 5 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 D M A 1 _ C h a n n e l 5 _ I R Q H a n d l e r  
                 B   D M A 1 _ C h a n n e l 5 _ I R Q H a n d l e r  
  
                 P U B W E A K   D M A 1 _ C h a n n e l 6 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 D M A 1 _ C h a n n e l 6 _ I R Q H a n d l e r  
                 B   D M A 1 _ C h a n n e l 6 _ I R Q H a n d l e r  
  
                 P U B W E A K   D M A 1 _ C h a n n e l 7 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 D M A 1 _ C h a n n e l 7 _ I R Q H a n d l e r  
                 B   D M A 1 _ C h a n n e l 7 _ I R Q H a n d l e r  
  
                 P U B W E A K   A D C 1 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 A D C 1 _ I R Q H a n d l e r  
                 B   A D C 1 _ I R Q H a n d l e r  
    
                 P U B W E A K   U S B _ H P _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 U S B _ H P _ I R Q H a n d l e r  
                 B   U S B _ H P _ I R Q H a n d l e r  
                  
                 P U B W E A K   U S B _ L P _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 U S B _ L P _ I R Q H a n d l e r  
                 B   U S B _ L P _ I R Q H a n d l e r  
                  
                 P U B W E A K   E X T I 9 _ 5 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 E X T I 9 _ 5 _ I R Q H a n d l e r  
                 B   E X T I 9 _ 5 _ I R Q H a n d l e r  
  
                 P U B W E A K   T I M 2 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 T I M 2 _ I R Q H a n d l e r  
                 B   T I M 2 _ I R Q H a n d l e r  
  
                 P U B W E A K   T I M 3 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 T I M 3 _ I R Q H a n d l e r  
                 B   T I M 3 _ I R Q H a n d l e r  
  
                 P U B W E A K   T I M 4 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 T I M 4 _ I R Q H a n d l e r  
                 B   T I M 4 _ I R Q H a n d l e r  
  
                 P U B W E A K   I 2 C 1 _ E V _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 I 2 C 1 _ E V _ I R Q H a n d l e r  
                 B   I 2 C 1 _ E V _ I R Q H a n d l e r  
  
                 P U B W E A K   I 2 C 1 _ E R _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 I 2 C 1 _ E R _ I R Q H a n d l e r  
                 B   I 2 C 1 _ E R _ I R Q H a n d l e r  
  
                 P U B W E A K   I 2 C 2 _ E V _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 I 2 C 2 _ E V _ I R Q H a n d l e r  
                 B   I 2 C 2 _ E V _ I R Q H a n d l e r  
  
                 P U B W E A K   I 2 C 2 _ E R _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 I 2 C 2 _ E R _ I R Q H a n d l e r  
                 B   I 2 C 2 _ E R _ I R Q H a n d l e r  
  
                 P U B W E A K   S P I 1 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 S P I 1 _ I R Q H a n d l e r  
                 B   S P I 1 _ I R Q H a n d l e r  
  
                 P U B W E A K   S P I 2 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 S P I 2 _ I R Q H a n d l e r  
                 B   S P I 2 _ I R Q H a n d l e r  
  
                 P U B W E A K   U S A R T 1 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 U S A R T 1 _ I R Q H a n d l e r  
                 B   U S A R T 1 _ I R Q H a n d l e r  
  
                 P U B W E A K   U S A R T 2 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 U S A R T 2 _ I R Q H a n d l e r  
                 B   U S A R T 2 _ I R Q H a n d l e r  
  
                 P U B W E A K   U S A R T 3 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 U S A R T 3 _ I R Q H a n d l e r  
                 B   U S A R T 3 _ I R Q H a n d l e r  
  
                 P U B W E A K   E X T I 1 5 _ 1 0 _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 E X T I 1 5 _ 1 0 _ I R Q H a n d l e r  
                 B   E X T I 1 5 _ 1 0 _ I R Q H a n d l e r  
  
                 P U B W E A K   R T C _ A l a r m _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 R T C _ A l a r m _ I R Q H a n d l e r  
                 B   R T C _ A l a r m _ I R Q H a n d l e r  
  
                 P U B W E A K   U S B W a k e U p _ I R Q H a n d l e r  
                 S E C T I O N   . t e x t : C O D E : R E O R D E R : N O R O O T ( 1 )  
 U S B W a k e U p _ I R Q H a n d l e r  
                 B   U S B W a k e U p _ I R Q H a n d l e r  
  
                 E N D  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  
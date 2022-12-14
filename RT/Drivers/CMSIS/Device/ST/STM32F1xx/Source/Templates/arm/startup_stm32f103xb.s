??; * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   2 0 1 7   S T M i c r o e l e c t r o n i c s   * * * * * * * * * * * * * * * * * * * *  
 ; *   F i l e   N a m e                     :   s t a r t u p _ s t m 3 2 f 1 0 3 x b . s  
 ; *   A u t h o r                           :   M C D   A p p l i c a t i o n   T e a m  
 ; *   D e s c r i p t i o n                 :   S T M 3 2 F 1 0 3 x B   D e v i c e s   v e c t o r   t a b l e   f o r   M D K - A R M   t o o l c h a i n .    
 ; *                                             T h i s   m o d u l e   p e r f o r m s :  
 ; *                                             -   S e t   t h e   i n i t i a l   S P  
 ; *                                             -   S e t   t h e   i n i t i a l   P C   = =   R e s e t _ H a n d l e r  
 ; *                                             -   S e t   t h e   v e c t o r   t a b l e   e n t r i e s   w i t h   t h e   e x c e p t i o n s   I S R   a d d r e s s  
 ; *                                             -   C o n f i g u r e   t h e   c l o c k   s y s t e m  
 ; *                                             -   B r a n c h e s   t o   _ _ m a i n   i n   t h e   C   l i b r a r y   ( w h i c h   e v e n t u a l l y  
 ; *                                                 c a l l s   m a i n ( ) ) .  
 ; *                                             A f t e r   R e s e t   t h e   C o r t e x - M 3   p r o c e s s o r   i s   i n   T h r e a d   m o d e ,  
 ; *                                             p r i o r i t y   i s   P r i v i l e g e d ,   a n d   t h e   S t a c k   i s   s e t   t o   M a i n .  
 ; * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
 ; *   @ a t t e n t i o n  
 ; *  
 ; *   C o p y r i g h t   ( c )   2 0 1 7   S T M i c r o e l e c t r o n i c s .  
 ; *   A l l   r i g h t s   r e s e r v e d .  
 ; *  
 ; *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
 ; *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
 ; *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
 ; *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
 ; *  
 ; * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
  
 ;   A m o u n t   o f   m e m o r y   ( i n   b y t e s )   a l l o c a t e d   f o r   S t a c k  
 ;   T a i l o r   t h i s   v a l u e   t o   y o u r   a p p l i c a t i o n   n e e d s  
 ;   < h >   S t a c k   C o n f i g u r a t i o n  
 ;       < o >   S t a c k   S i z e   ( i n   B y t e s )   < 0 x 0 - 0 x F F F F F F F F : 8 >  
 ;   < / h >  
  
 S t a c k _ S i z e             E Q U           0 x 0 0 0 0 0 4 0 0  
  
                                 A R E A         S T A C K ,   N O I N I T ,   R E A D W R I T E ,   A L I G N = 3  
 S t a c k _ M e m               S P A C E       S t a c k _ S i z e  
 _ _ i n i t i a l _ s p  
  
  
 ;   < h >   H e a p   C o n f i g u r a t i o n  
 ;       < o >     H e a p   S i z e   ( i n   B y t e s )   < 0 x 0 - 0 x F F F F F F F F : 8 >  
 ;   < / h >  
  
 H e a p _ S i z e               E Q U           0 x 0 0 0 0 0 2 0 0  
  
                                 A R E A         H E A P ,   N O I N I T ,   R E A D W R I T E ,   A L I G N = 3  
 _ _ h e a p _ b a s e  
 H e a p _ M e m                 S P A C E       H e a p _ S i z e  
 _ _ h e a p _ l i m i t  
  
                                 P R E S E R V E 8  
                                 T H U M B  
  
  
 ;   V e c t o r   T a b l e   M a p p e d   t o   A d d r e s s   0   a t   R e s e t  
                                 A R E A         R E S E T ,   D A T A ,   R E A D O N L Y  
                                 E X P O R T     _ _ V e c t o r s  
                                 E X P O R T     _ _ V e c t o r s _ E n d  
                                 E X P O R T     _ _ V e c t o r s _ S i z e  
  
 _ _ V e c t o r s               D C D           _ _ i n i t i a l _ s p                               ;   T o p   o f   S t a c k  
                                 D C D           R e s e t _ H a n d l e r                             ;   R e s e t   H a n d l e r  
                                 D C D           N M I _ H a n d l e r                                 ;   N M I   H a n d l e r  
                                 D C D           H a r d F a u l t _ H a n d l e r                     ;   H a r d   F a u l t   H a n d l e r  
                                 D C D           M e m M a n a g e _ H a n d l e r                     ;   M P U   F a u l t   H a n d l e r  
                                 D C D           B u s F a u l t _ H a n d l e r                       ;   B u s   F a u l t   H a n d l e r  
                                 D C D           U s a g e F a u l t _ H a n d l e r                   ;   U s a g e   F a u l t   H a n d l e r  
                                 D C D           0                                                     ;   R e s e r v e d  
                                 D C D           0                                                     ;   R e s e r v e d  
                                 D C D           0                                                     ;   R e s e r v e d  
                                 D C D           0                                                     ;   R e s e r v e d  
                                 D C D           S V C _ H a n d l e r                                 ;   S V C a l l   H a n d l e r  
                                 D C D           D e b u g M o n _ H a n d l e r                       ;   D e b u g   M o n i t o r   H a n d l e r  
                                 D C D           0                                                     ;   R e s e r v e d  
                                 D C D           P e n d S V _ H a n d l e r                           ;   P e n d S V   H a n d l e r  
                                 D C D           S y s T i c k _ H a n d l e r                         ;   S y s T i c k   H a n d l e r  
  
                                 ;   E x t e r n a l   I n t e r r u p t s  
                                 D C D           W W D G _ I R Q H a n d l e r                         ;   W i n d o w   W a t c h d o g  
                                 D C D           P V D _ I R Q H a n d l e r                           ;   P V D   t h r o u g h   E X T I   L i n e   d e t e c t  
                                 D C D           T A M P E R _ I R Q H a n d l e r                     ;   T a m p e r  
                                 D C D           R T C _ I R Q H a n d l e r                           ;   R T C  
                                 D C D           F L A S H _ I R Q H a n d l e r                       ;   F l a s h  
                                 D C D           R C C _ I R Q H a n d l e r                           ;   R C C  
                                 D C D           E X T I 0 _ I R Q H a n d l e r                       ;   E X T I   L i n e   0  
                                 D C D           E X T I 1 _ I R Q H a n d l e r                       ;   E X T I   L i n e   1  
                                 D C D           E X T I 2 _ I R Q H a n d l e r                       ;   E X T I   L i n e   2  
                                 D C D           E X T I 3 _ I R Q H a n d l e r                       ;   E X T I   L i n e   3  
                                 D C D           E X T I 4 _ I R Q H a n d l e r                       ;   E X T I   L i n e   4  
                                 D C D           D M A 1 _ C h a n n e l 1 _ I R Q H a n d l e r       ;   D M A 1   C h a n n e l   1  
                                 D C D           D M A 1 _ C h a n n e l 2 _ I R Q H a n d l e r       ;   D M A 1   C h a n n e l   2  
                                 D C D           D M A 1 _ C h a n n e l 3 _ I R Q H a n d l e r       ;   D M A 1   C h a n n e l   3  
                                 D C D           D M A 1 _ C h a n n e l 4 _ I R Q H a n d l e r       ;   D M A 1   C h a n n e l   4  
                                 D C D           D M A 1 _ C h a n n e l 5 _ I R Q H a n d l e r       ;   D M A 1   C h a n n e l   5  
                                 D C D           D M A 1 _ C h a n n e l 6 _ I R Q H a n d l e r       ;   D M A 1   C h a n n e l   6  
                                 D C D           D M A 1 _ C h a n n e l 7 _ I R Q H a n d l e r       ;   D M A 1   C h a n n e l   7  
                                 D C D           A D C 1 _ 2 _ I R Q H a n d l e r                     ;   A D C 1 _ 2  
                                 D C D           U S B _ H P _ C A N 1 _ T X _ I R Q H a n d l e r     ;   U S B   H i g h   P r i o r i t y   o r   C A N 1   T X  
                                 D C D           U S B _ L P _ C A N 1 _ R X 0 _ I R Q H a n d l e r   ;   U S B   L o w     P r i o r i t y   o r   C A N 1   R X 0  
                                 D C D           C A N 1 _ R X 1 _ I R Q H a n d l e r                 ;   C A N 1   R X 1  
                                 D C D           C A N 1 _ S C E _ I R Q H a n d l e r                 ;   C A N 1   S C E  
                                 D C D           E X T I 9 _ 5 _ I R Q H a n d l e r                   ;   E X T I   L i n e   9 . . 5  
                                 D C D           T I M 1 _ B R K _ I R Q H a n d l e r                 ;   T I M 1   B r e a k  
                                 D C D           T I M 1 _ U P _ I R Q H a n d l e r                   ;   T I M 1   U p d a t e  
                                 D C D           T I M 1 _ T R G _ C O M _ I R Q H a n d l e r         ;   T I M 1   T r i g g e r   a n d   C o m m u t a t i o n  
                                 D C D           T I M 1 _ C C _ I R Q H a n d l e r                   ;   T I M 1   C a p t u r e   C o m p a r e  
                                 D C D           T I M 2 _ I R Q H a n d l e r                         ;   T I M 2  
                                 D C D           T I M 3 _ I R Q H a n d l e r                         ;   T I M 3  
                                 D C D           T I M 4 _ I R Q H a n d l e r                         ;   T I M 4  
                                 D C D           I 2 C 1 _ E V _ I R Q H a n d l e r                   ;   I 2 C 1   E v e n t  
                                 D C D           I 2 C 1 _ E R _ I R Q H a n d l e r                   ;   I 2 C 1   E r r o r  
                                 D C D           I 2 C 2 _ E V _ I R Q H a n d l e r                   ;   I 2 C 2   E v e n t  
                                 D C D           I 2 C 2 _ E R _ I R Q H a n d l e r                   ;   I 2 C 2   E r r o r  
                                 D C D           S P I 1 _ I R Q H a n d l e r                         ;   S P I 1  
                                 D C D           S P I 2 _ I R Q H a n d l e r                         ;   S P I 2  
                                 D C D           U S A R T 1 _ I R Q H a n d l e r                     ;   U S A R T 1  
                                 D C D           U S A R T 2 _ I R Q H a n d l e r                     ;   U S A R T 2  
                                 D C D           U S A R T 3 _ I R Q H a n d l e r                     ;   U S A R T 3  
                                 D C D           E X T I 1 5 _ 1 0 _ I R Q H a n d l e r               ;   E X T I   L i n e   1 5 . . 1 0  
                                 D C D           R T C _ A l a r m _ I R Q H a n d l e r                 ;   R T C   A l a r m   t h r o u g h   E X T I   L i n e  
                                 D C D           U S B W a k e U p _ I R Q H a n d l e r               ;   U S B   W a k e u p   f r o m   s u s p e n d  
 _ _ V e c t o r s _ E n d  
  
 _ _ V e c t o r s _ S i z e     E Q U     _ _ V e c t o r s _ E n d   -   _ _ V e c t o r s  
  
                                 A R E A         | . t e x t | ,   C O D E ,   R E A D O N L Y  
  
 ;   R e s e t   h a n d l e r  
 R e s e t _ H a n d l e r         P R O C  
                                   E X P O R T     R e s e t _ H a n d l e r                           [ W E A K ]  
           I M P O R T     _ _ m a i n  
           I M P O R T     S y s t e m I n i t  
                                   L D R           R 0 ,   = S y s t e m I n i t  
                                   B L X           R 0  
                                   L D R           R 0 ,   = _ _ m a i n  
                                   B X             R 0  
                                   E N D P  
  
 ;   D u m m y   E x c e p t i o n   H a n d l e r s   ( i n f i n i t e   l o o p s   w h i c h   c a n   b e   m o d i f i e d )  
  
 N M I _ H a n d l e r           P R O C  
                                 E X P O R T     N M I _ H a n d l e r                                 [ W E A K ]  
                                 B               .  
                                 E N D P  
 H a r d F a u l t _ H a n d l e r \  
                                 P R O C  
                                 E X P O R T     H a r d F a u l t _ H a n d l e r                     [ W E A K ]  
                                 B               .  
                                 E N D P  
 M e m M a n a g e _ H a n d l e r \  
                                 P R O C  
                                 E X P O R T     M e m M a n a g e _ H a n d l e r                     [ W E A K ]  
                                 B               .  
                                 E N D P  
 B u s F a u l t _ H a n d l e r \  
                                 P R O C  
                                 E X P O R T     B u s F a u l t _ H a n d l e r                       [ W E A K ]  
                                 B               .  
                                 E N D P  
 U s a g e F a u l t _ H a n d l e r \  
                                 P R O C  
                                 E X P O R T     U s a g e F a u l t _ H a n d l e r                   [ W E A K ]  
                                 B               .  
                                 E N D P  
 S V C _ H a n d l e r           P R O C  
                                 E X P O R T     S V C _ H a n d l e r                                 [ W E A K ]  
                                 B               .  
                                 E N D P  
 D e b u g M o n _ H a n d l e r \  
                                 P R O C  
                                 E X P O R T     D e b u g M o n _ H a n d l e r                       [ W E A K ]  
                                 B               .  
                                 E N D P  
 P e n d S V _ H a n d l e r     P R O C  
                                 E X P O R T     P e n d S V _ H a n d l e r                           [ W E A K ]  
                                 B               .  
                                 E N D P  
 S y s T i c k _ H a n d l e r   P R O C  
                                 E X P O R T     S y s T i c k _ H a n d l e r                         [ W E A K ]  
                                 B               .  
                                 E N D P  
  
 D e f a u l t _ H a n d l e r   P R O C  
  
                                 E X P O R T     W W D G _ I R Q H a n d l e r                         [ W E A K ]  
                                 E X P O R T     P V D _ I R Q H a n d l e r                           [ W E A K ]  
                                 E X P O R T     T A M P E R _ I R Q H a n d l e r                     [ W E A K ]  
                                 E X P O R T     R T C _ I R Q H a n d l e r                           [ W E A K ]  
                                 E X P O R T     F L A S H _ I R Q H a n d l e r                       [ W E A K ]  
                                 E X P O R T     R C C _ I R Q H a n d l e r                           [ W E A K ]  
                                 E X P O R T     E X T I 0 _ I R Q H a n d l e r                       [ W E A K ]  
                                 E X P O R T     E X T I 1 _ I R Q H a n d l e r                       [ W E A K ]  
                                 E X P O R T     E X T I 2 _ I R Q H a n d l e r                       [ W E A K ]  
                                 E X P O R T     E X T I 3 _ I R Q H a n d l e r                       [ W E A K ]  
                                 E X P O R T     E X T I 4 _ I R Q H a n d l e r                       [ W E A K ]  
                                 E X P O R T     D M A 1 _ C h a n n e l 1 _ I R Q H a n d l e r       [ W E A K ]  
                                 E X P O R T     D M A 1 _ C h a n n e l 2 _ I R Q H a n d l e r       [ W E A K ]  
                                 E X P O R T     D M A 1 _ C h a n n e l 3 _ I R Q H a n d l e r       [ W E A K ]  
                                 E X P O R T     D M A 1 _ C h a n n e l 4 _ I R Q H a n d l e r       [ W E A K ]  
                                 E X P O R T     D M A 1 _ C h a n n e l 5 _ I R Q H a n d l e r       [ W E A K ]  
                                 E X P O R T     D M A 1 _ C h a n n e l 6 _ I R Q H a n d l e r       [ W E A K ]  
                                 E X P O R T     D M A 1 _ C h a n n e l 7 _ I R Q H a n d l e r       [ W E A K ]  
                                 E X P O R T     A D C 1 _ 2 _ I R Q H a n d l e r                     [ W E A K ]  
                                 E X P O R T     U S B _ H P _ C A N 1 _ T X _ I R Q H a n d l e r     [ W E A K ]  
                                 E X P O R T     U S B _ L P _ C A N 1 _ R X 0 _ I R Q H a n d l e r   [ W E A K ]  
                                 E X P O R T     C A N 1 _ R X 1 _ I R Q H a n d l e r                 [ W E A K ]  
                                 E X P O R T     C A N 1 _ S C E _ I R Q H a n d l e r                 [ W E A K ]  
                                 E X P O R T     E X T I 9 _ 5 _ I R Q H a n d l e r                   [ W E A K ]  
                                 E X P O R T     T I M 1 _ B R K _ I R Q H a n d l e r                 [ W E A K ]  
                                 E X P O R T     T I M 1 _ U P _ I R Q H a n d l e r                   [ W E A K ]  
                                 E X P O R T     T I M 1 _ T R G _ C O M _ I R Q H a n d l e r         [ W E A K ]  
                                 E X P O R T     T I M 1 _ C C _ I R Q H a n d l e r                   [ W E A K ]  
                                 E X P O R T     T I M 2 _ I R Q H a n d l e r                         [ W E A K ]  
                                 E X P O R T     T I M 3 _ I R Q H a n d l e r                         [ W E A K ]  
                                 E X P O R T     T I M 4 _ I R Q H a n d l e r                         [ W E A K ]  
                                 E X P O R T     I 2 C 1 _ E V _ I R Q H a n d l e r                   [ W E A K ]  
                                 E X P O R T     I 2 C 1 _ E R _ I R Q H a n d l e r                   [ W E A K ]  
                                 E X P O R T     I 2 C 2 _ E V _ I R Q H a n d l e r                   [ W E A K ]  
                                 E X P O R T     I 2 C 2 _ E R _ I R Q H a n d l e r                   [ W E A K ]  
                                 E X P O R T     S P I 1 _ I R Q H a n d l e r                         [ W E A K ]  
                                 E X P O R T     S P I 2 _ I R Q H a n d l e r                         [ W E A K ]  
                                 E X P O R T     U S A R T 1 _ I R Q H a n d l e r                     [ W E A K ]  
                                 E X P O R T     U S A R T 2 _ I R Q H a n d l e r                     [ W E A K ]  
                                 E X P O R T     U S A R T 3 _ I R Q H a n d l e r                     [ W E A K ]  
                                 E X P O R T     E X T I 1 5 _ 1 0 _ I R Q H a n d l e r               [ W E A K ]  
                                 E X P O R T     R T C _ A l a r m _ I R Q H a n d l e r                 [ W E A K ]  
                                 E X P O R T     U S B W a k e U p _ I R Q H a n d l e r               [ W E A K ]  
  
 W W D G _ I R Q H a n d l e r  
 P V D _ I R Q H a n d l e r  
 T A M P E R _ I R Q H a n d l e r  
 R T C _ I R Q H a n d l e r  
 F L A S H _ I R Q H a n d l e r  
 R C C _ I R Q H a n d l e r  
 E X T I 0 _ I R Q H a n d l e r  
 E X T I 1 _ I R Q H a n d l e r  
 E X T I 2 _ I R Q H a n d l e r  
 E X T I 3 _ I R Q H a n d l e r  
 E X T I 4 _ I R Q H a n d l e r  
 D M A 1 _ C h a n n e l 1 _ I R Q H a n d l e r  
 D M A 1 _ C h a n n e l 2 _ I R Q H a n d l e r  
 D M A 1 _ C h a n n e l 3 _ I R Q H a n d l e r  
 D M A 1 _ C h a n n e l 4 _ I R Q H a n d l e r  
 D M A 1 _ C h a n n e l 5 _ I R Q H a n d l e r  
 D M A 1 _ C h a n n e l 6 _ I R Q H a n d l e r  
 D M A 1 _ C h a n n e l 7 _ I R Q H a n d l e r  
 A D C 1 _ 2 _ I R Q H a n d l e r  
 U S B _ H P _ C A N 1 _ T X _ I R Q H a n d l e r  
 U S B _ L P _ C A N 1 _ R X 0 _ I R Q H a n d l e r  
 C A N 1 _ R X 1 _ I R Q H a n d l e r  
 C A N 1 _ S C E _ I R Q H a n d l e r  
 E X T I 9 _ 5 _ I R Q H a n d l e r  
 T I M 1 _ B R K _ I R Q H a n d l e r  
 T I M 1 _ U P _ I R Q H a n d l e r  
 T I M 1 _ T R G _ C O M _ I R Q H a n d l e r  
 T I M 1 _ C C _ I R Q H a n d l e r  
 T I M 2 _ I R Q H a n d l e r  
 T I M 3 _ I R Q H a n d l e r  
 T I M 4 _ I R Q H a n d l e r  
 I 2 C 1 _ E V _ I R Q H a n d l e r  
 I 2 C 1 _ E R _ I R Q H a n d l e r  
 I 2 C 2 _ E V _ I R Q H a n d l e r  
 I 2 C 2 _ E R _ I R Q H a n d l e r  
 S P I 1 _ I R Q H a n d l e r  
 S P I 2 _ I R Q H a n d l e r  
 U S A R T 1 _ I R Q H a n d l e r  
 U S A R T 2 _ I R Q H a n d l e r  
 U S A R T 3 _ I R Q H a n d l e r  
 E X T I 1 5 _ 1 0 _ I R Q H a n d l e r  
 R T C _ A l a r m _ I R Q H a n d l e r  
 U S B W a k e U p _ I R Q H a n d l e r  
  
                                 B               .  
  
                                 E N D P  
  
                                 A L I G N  
  
 ; * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
 ;   U s e r   S t a c k   a n d   H e a p   i n i t i a l i z a t i o n  
 ; * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
                                   I F             : D E F : _ _ M I C R O L I B                        
                                  
                                   E X P O R T     _ _ i n i t i a l _ s p  
                                   E X P O R T     _ _ h e a p _ b a s e  
                                   E X P O R T     _ _ h e a p _ l i m i t  
                                  
                                   E L S E  
                                  
                                   I M P O R T     _ _ u s e _ t w o _ r e g i o n _ m e m o r y  
                                   E X P O R T     _ _ u s e r _ i n i t i a l _ s t a c k h e a p  
                                    
 _ _ u s e r _ i n i t i a l _ s t a c k h e a p  
  
                                   L D R           R 0 ,   =     H e a p _ M e m  
                                   L D R           R 1 ,   = ( S t a c k _ M e m   +   S t a c k _ S i z e )  
                                   L D R           R 2 ,   =   ( H e a p _ M e m   +     H e a p _ S i z e )  
                                   L D R           R 3 ,   =   S t a c k _ M e m  
                                   B X             L R  
  
                                   A L I G N  
  
                                   E N D I F  
  
                                   E N D  
  
 ; * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * *  
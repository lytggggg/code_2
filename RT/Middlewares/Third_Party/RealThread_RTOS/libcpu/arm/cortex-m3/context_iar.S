??; / *  
 ;   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 1 8 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
 ;   *  
 ;   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
 ;   *  
 ;   *   C h a n g e   L o g s :  
 ;   *   D a t e                       A u t h o r               N o t e s  
 ;   *   2 0 0 9 - 0 1 - 1 7           B e r n a r d             f i r s t   v e r s i o n  
 ;   *   2 0 0 9 - 0 9 - 2 7           B e r n a r d             a d d   p r o t e c t   w h e n   c o n t e x   s w i t c h   o c c u r s  
 ;   *   2 0 1 3 - 0 6 - 1 8           a o z i m a               a d d   r e s t o r e   M S P   f e a t u r e .  
 ;   *   2 0 1 3 - 0 7 - 0 9           a o z i m a               e n h a n c e m e n t   h a r d   f a u l t   e x c e p t i o n   h a n d l e r .  
 ;   * /  
  
 ; / * *  
 ;   *   @ a d d t o g r o u p   c o r t e x - m 3  
 ;   * /  
 ; / * @ { * /  
  
 S C B _ V T O R                 E Q U           0 x E 0 0 0 E D 0 8                               ;   V e c t o r   T a b l e   O f f s e t   R e g i s t e r  
 N V I C _ I N T _ C T R L       E Q U           0 x E 0 0 0 E D 0 4                               ;   i n t e r r u p t   c o n t r o l   s t a t e   r e g i s t e r  
 N V I C _ S Y S P R I 2         E Q U           0 x E 0 0 0 E D 2 0                               ;   s y s t e m   p r i o r i t y   r e g i s t e r   ( 2 )  
 N V I C _ P E N D S V _ P R I   E Q U           0 x F F F F 0 0 0 0                               ;   P e n d S V   a n d   S y s T i c k   p r i o r i t y   v a l u e   ( l o w e s t )  
 N V I C _ P E N D S V S E T     E Q U           0 x 1 0 0 0 0 0 0 0                               ;   v a l u e   t o   t r i g g e r   P e n d S V   e x c e p t i o n  
  
         S E C T I O N         . t e x t : C O D E ( 2 )  
         T H U M B  
         R E Q U I R E 8  
         P R E S E R V E 8  
  
         I M P O R T   r t _ t h r e a d _ s w i t c h _ i n t e r r u p t _ f l a g  
         I M P O R T   r t _ i n t e r r u p t _ f r o m _ t h r e a d  
         I M P O R T   r t _ i n t e r r u p t _ t o _ t h r e a d  
  
 ; / *  
 ;   *   r t _ b a s e _ t   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
 ;   * /  
         E X P O R T   r t _ h w _ i n t e r r u p t _ d i s a b l e  
 r t _ h w _ i n t e r r u p t _ d i s a b l e :  
         M R S           r 0 ,   P R I M A S K  
         C P S I D       I  
         B X             L R  
  
 ; / *  
 ;   *   v o i d   r t _ h w _ i n t e r r u p t _ e n a b l e ( r t _ b a s e _ t   l e v e l ) ;  
 ;   * /  
         E X P O R T     r t _ h w _ i n t e r r u p t _ e n a b l e  
 r t _ h w _ i n t e r r u p t _ e n a b l e :  
         M S R           P R I M A S K ,   r 0  
         B X             L R  
  
 ; / *  
 ;   *   v o i d   r t _ h w _ c o n t e x t _ s w i t c h ( r t _ u i n t 3 2   f r o m ,   r t _ u i n t 3 2   t o ) ;  
 ;   *   r 0   - - >   f r o m  
 ;   *   r 1   - - >   t o  
 ;   * /  
         E X P O R T   r t _ h w _ c o n t e x t _ s w i t c h _ i n t e r r u p t  
         E X P O R T   r t _ h w _ c o n t e x t _ s w i t c h  
 r t _ h w _ c o n t e x t _ s w i t c h _ i n t e r r u p t :  
 r t _ h w _ c o n t e x t _ s w i t c h :  
         ;   s e t   r t _ t h r e a d _ s w i t c h _ i n t e r r u p t _ f l a g   t o   1  
         L D R           r 2 ,   = r t _ t h r e a d _ s w i t c h _ i n t e r r u p t _ f l a g  
         L D R           r 3 ,   [ r 2 ]  
         C M P           r 3 ,   # 1  
         B E Q           _ r e s w i t c h  
         M O V           r 3 ,   # 1  
         S T R           r 3 ,   [ r 2 ]  
  
         L D R           r 2 ,   = r t _ i n t e r r u p t _ f r o m _ t h r e a d       ;   s e t   r t _ i n t e r r u p t _ f r o m _ t h r e a d  
         S T R           r 0 ,   [ r 2 ]  
  
 _ r e s w i t c h  
         L D R           r 2 ,   = r t _ i n t e r r u p t _ t o _ t h r e a d           ;   s e t   r t _ i n t e r r u p t _ t o _ t h r e a d  
         S T R           r 1 ,   [ r 2 ]  
  
         L D R           r 0 ,   = N V I C _ I N T _ C T R L                             ;   t r i g g e r   t h e   P e n d S V   e x c e p t i o n   ( c a u s e s   c o n t e x t   s w i t c h )  
         L D R           r 1 ,   = N V I C _ P E N D S V S E T  
         S T R           r 1 ,   [ r 0 ]  
         B X             L R  
  
 ;   r 0   - - >   s w i t c h   f r o m   t h r e a d   s t a c k  
 ;   r 1   - - >   s w i t c h   t o   t h r e a d   s t a c k  
 ;   p s r ,   p c ,   l r ,   r 1 2 ,   r 3 ,   r 2 ,   r 1 ,   r 0   a r e   p u s h e d   i n t o   [ f r o m ]   s t a c k  
         E X P O R T   P e n d S V _ H a n d l e r  
 P e n d S V _ H a n d l e r :  
  
         ;   d i s a b l e   i n t e r r u p t   t o   p r o t e c t   c o n t e x t   s w i t c h  
         M R S           r 2 ,   P R I M A S K  
         C P S I D       I  
  
         ;   g e t   r t _ t h r e a d _ s w i t c h _ i n t e r r u p t _ f l a g  
         L D R           r 0 ,   = r t _ t h r e a d _ s w i t c h _ i n t e r r u p t _ f l a g  
         L D R           r 1 ,   [ r 0 ]  
         C B Z           r 1 ,   p e n d s v _ e x i t                   ;   p e n d s v   a l r e a d y   h a n d l e d  
  
         ;   c l e a r   r t _ t h r e a d _ s w i t c h _ i n t e r r u p t _ f l a g   t o   0  
         M O V           r 1 ,   # 0 x 0 0  
         S T R           r 1 ,   [ r 0 ]  
  
         L D R           r 0 ,   = r t _ i n t e r r u p t _ f r o m _ t h r e a d  
         L D R           r 1 ,   [ r 0 ]  
         C B Z           r 1 ,   s w i t c h _ t o _ t h r e a d         ;   s k i p   r e g i s t e r   s a v e   a t   t h e   f i r s t   t i m e  
  
         M R S           r 1 ,   p s p                                   ;   g e t   f r o m   t h r e a d   s t a c k   p o i n t e r  
         S T M F D       r 1 ! ,   { r 4   -   r 1 1 }                   ;   p u s h   r 4   -   r 1 1   r e g i s t e r  
         L D R           r 0 ,   [ r 0 ]  
         S T R           r 1 ,   [ r 0 ]                                 ;   u p d a t e   f r o m   t h r e a d   s t a c k   p o i n t e r  
  
 s w i t c h _ t o _ t h r e a d  
         L D R           r 1 ,   = r t _ i n t e r r u p t _ t o _ t h r e a d  
         L D R           r 1 ,   [ r 1 ]  
         L D R           r 1 ,   [ r 1 ]                                 ;   l o a d   t h r e a d   s t a c k   p o i n t e r  
  
         L D M F D       r 1 ! ,   { r 4   -   r 1 1 }                   ;   p o p   r 4   -   r 1 1   r e g i s t e r  
         M S R           p s p ,   r 1                                   ;   u p d a t e   s t a c k   p o i n t e r  
  
 p e n d s v _ e x i t  
         ;   r e s t o r e   i n t e r r u p t  
         M S R           P R I M A S K ,   r 2  
  
         O R R           l r ,   l r ,   # 0 x 0 4  
         B X             l r  
  
 ; / *  
 ;   *   v o i d   r t _ h w _ c o n t e x t _ s w i t c h _ t o ( r t _ u i n t 3 2   t o ) ;  
 ;   *   r 0   - - >   t o  
 ;   * /  
         E X P O R T   r t _ h w _ c o n t e x t _ s w i t c h _ t o  
 r t _ h w _ c o n t e x t _ s w i t c h _ t o :  
         L D R           r 1 ,   = r t _ i n t e r r u p t _ t o _ t h r e a d  
         S T R           r 0 ,   [ r 1 ]  
  
         ;   s e t   f r o m   t h r e a d   t o   0  
         L D R           r 1 ,   = r t _ i n t e r r u p t _ f r o m _ t h r e a d  
         M O V           r 0 ,   # 0 x 0  
         S T R           r 0 ,   [ r 1 ]  
  
         ;   s e t   i n t e r r u p t   f l a g   t o   1  
         L D R           r 1 ,   = r t _ t h r e a d _ s w i t c h _ i n t e r r u p t _ f l a g  
         M O V           r 0 ,   # 1  
         S T R           r 0 ,   [ r 1 ]  
  
         ;   s e t   t h e   P e n d S V   a n d   S y s T i c k   e x c e p t i o n   p r i o r i t y  
         L D R           r 0 ,   = N V I C _ S Y S P R I 2  
         L D R           r 1 ,   = N V I C _ P E N D S V _ P R I  
         L D R . W       r 2 ,   [ r 0 , # 0 x 0 0 ]               ;   r e a d  
         O R R           r 1 , r 1 , r 2                           ;   m o d i f y  
         S T R           r 1 ,   [ r 0 ]                           ;   w r i t e - b a c k  
  
         L D R           r 0 ,   = N V I C _ I N T _ C T R L             ;   t r i g g e r   t h e   P e n d S V   e x c e p t i o n   ( c a u s e s   c o n t e x t   s w i t c h )  
         L D R           r 1 ,   = N V I C _ P E N D S V S E T  
         S T R           r 1 ,   [ r 0 ]  
  
         ;   r e s t o r e   M S P  
         L D R           r 0 ,   = S C B _ V T O R  
         L D R           r 0 ,   [ r 0 ]  
         L D R           r 0 ,   [ r 0 ]  
         N O P  
         M S R           m s p ,   r 0  
  
         ;   e n a b l e   i n t e r r u p t s   a t   p r o c e s s o r   l e v e l  
         C P S I E       F  
         C P S I E       I  
  
         ;   n e v e r   r e a c h   h e r e !  
  
 ;   c o m p a t i b l e   w i t h   o l d   v e r s i o n  
         E X P O R T   r t _ h w _ i n t e r r u p t _ t h r e a d _ s w i t c h  
 r t _ h w _ i n t e r r u p t _ t h r e a d _ s w i t c h :  
         B X             l r  
  
         I M P O R T   r t _ h w _ h a r d _ f a u l t _ e x c e p t i o n  
         E X P O R T   H a r d F a u l t _ H a n d l e r  
 H a r d F a u l t _ H a n d l e r :  
  
         ;   g e t   c u r r e n t   c o n t e x t  
         M R S           r 0 ,   m s p                                   ;   g e t   f a u l t   c o n t e x t   f r o m   h a n d l e r .  
         T S T           l r ,   # 0 x 0 4                               ;   i f ( ! E X C _ R E T U R N [ 2 ] )  
         B E Q           _ g e t _ s p _ d o n e  
         M R S           r 0 ,   p s p                                   ;   g e t   f a u l t   c o n t e x t   f r o m   t h r e a d .  
 _ g e t _ s p _ d o n e  
  
         S T M F D       r 0 ! ,   { r 4   -   r 1 1 }                   ;   p u s h   r 4   -   r 1 1   r e g i s t e r  
         ; S T M F D       r 0 ! ,   { l r }                               ;   p u s h   e x e c _ r e t u r n   r e g i s t e r  
         S U B           r 0 ,   r 0 ,   # 0 x 0 4  
         S T R           l r ,   [ r 0 ]  
  
         T S T           l r ,   # 0 x 0 4                               ;   i f ( ! E X C _ R E T U R N [ 2 ] )  
         B E Q           _ u p d a t e _ m s p  
         M S R           p s p ,   r 0                                   ;   u p d a t e   s t a c k   p o i n t e r   t o   P S P .  
         B               _ u p d a t e _ d o n e  
 _ u p d a t e _ m s p  
         M S R           m s p ,   r 0                                   ;   u p d a t e   s t a c k   p o i n t e r   t o   M S P .  
 _ u p d a t e _ d o n e  
  
         P U S H         { l r }  
         B L             r t _ h w _ h a r d _ f a u l t _ e x c e p t i o n  
         P O P           { l r }  
  
         O R R           l r ,   l r ,   # 0 x 0 4  
         B X             l r  
  
         E N D  